/***************************************************************************
*   Copyright (C) 2008 by Heikki Pulkkinen   *
*   heikki@localhost   *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
***************************************************************************/
#include "I51BaseInternalROMW.h"
#include "../processors/I8051_Flash.h"


I51BaseInternalROMW::I51BaseInternalROMW(QWidget* parent, char const * name, int wflags, int const  index, int const  type) : I51BaseW(parent, name, wflags, index, type)
{

	i_disassemblew_=0;
	i_assemblersourcew_=0;
	i_romw_=0;
	internalProgramMemoryHexFilename_=QString::null;
}

I51BaseInternalROMW::~I51BaseInternalROMW()
{
}

void I51BaseInternalROMW::powerOnReset(void)
{
	I51BaseW::powerOnReset(); //Kantaluokan reset

	if(i_disassemblew_)
		i_disassemblew_->clearExecutionPoint();
	if(i_assemblersourcew_)
		i_assemblersourcew_->clearExecutionPoint();

	updateProcessorWindows();
}

bool I51BaseInternalROMW::step(bool const disassemble, double const stepTime)
{
	if(i_disassemblew_&&processor_->readPinValue(pinEA_Index_))
		return doStep(disassemble, stepTime);
	else
		return I51BaseW::step(disassemble, stepTime);
}

bool I51BaseInternalROMW::isProgramCounterPointingInternalProgramMemory(void)
{
	unsigned long address=processor_->readProgramCounterValue();
	if((processor_->readPinValue(pinEA_Index_))&&(address<dynamic_cast<I8051*>(processor_)->readInternalProgramMemorySize()))
		return true;
	return false;
}

void I51BaseInternalROMW::updateProgramMemoryWindows(void)
{
	if(!firstProgramLoad_)
	{
		unsigned long address=processor_->readProgramCounterValue();
		if(isProgramCounterPointingInternalProgramMemory())
		{
			//Disassemble internal
			if(i_disassemblew_)
				i_disassemblew_->update(address, processor_->readLastExecutionProgramCounterValue(), lastStepProgramCounterValue);
			//Source internal
			if(i_assemblersourcew_)
				i_assemblersourcew_->updateAsmSource(address, lastStepProgramCounterValue);
			//Internal ROM
			if(i_romw_)
				//i_romw_->focusAddress(address);
				i_romw_->setProgramCounterPointer(address);
		}
		else
			I51BaseW::updateProgramMemoryWindows();

		setCaptionAndIconToProgramMemoryWs(whiteLedIcon_);
	}
}

void I51BaseInternalROMW::updateProcessorWindows_VirtualPart(void)
{
	if(!firstProgramLoad_)
	{
		unsigned long address=processor_->readProgramCounterValue();
		//internal sourceW:n käyttäjän nimeämät portit
		for(address=I8031_NameS::MIN_SFR_ADDRESS;address<=I8031_NameS::MAX_SFR_ADDRESS;address++)
		{
			if(processor_->isInternalDataMemoryLocationInUse(address))
			{
				if(processor_->isSFRRegisterIOPort(address))
				{
					if(i_assemblersourcew_)
						i_assemblersourcew_->updateNamedPortBits(address, processor_->readInternalDataMemory(address));
				}
			}
		}
		//Päivitetään internalsourcen käyttäjn nimeämät bittialueen bitit
		for(address=I8031_NameS::MIN_BIT_AREA_ADDRESS;address<=I8031_NameS::MAX_BIT_AREA_ADDRESS;address++)
		{
			if(i_assemblersourcew_)
				i_assemblersourcew_->updateNamedBits(address, processor_->readInternalDataMemory(address));
		}
	}
}

void I51BaseInternalROMW::createDynamicWindows_VirtualPart(void)
{
	//Disassemble Window
	if(processor_->readPinValue(pinEA_Index_))
	{
		//Luodaan ensin ikkuna jos sitä ei ole luotu vielä.
		//DISASSEMBLE (internal)
		createDisassembleWindow(i_disassemblew_, i18n("internal"), WINDOWNAME_INTERNAL_DISASSEMBLE);
		internalProgramMemoryHexFilename_=activeHexFilename_;

		//IROM
		I8051* p = dynamic_cast<I8051*>(processor_);
		unsigned int maxInternalROM=p->readInternalProgramMemorySize();
		//Jos ikkunaa ei luotu luodaan se
		if(!i_romw_)
		{
			i_romw_ = new RomW(windowWorkspace_, WINDOWNAME_INTERNAL_ROM, WDestructiveClose|WMouseNoMask,0, maxInternalROM);
			i_romw_->setPlainCaption(i18n("INTERNAL ROM"));
			i_romw_->setGeometry(0,0,i_romw_->romTableGeometrySize().width()+20, height()/2);
		}
		unsigned int wState=i_romw_->windowState();
		i_romw_->showMinimized();
		unsigned long address;
		for(address=0;address<maxInternalROM;address++)
		{
			int value;
			value=p->readInternalProgramMemoryValue(address);
			i_romw_->writeValue(address,value);
		}
		if(wState!=Qt::WindowMinimized)
			i_romw_->showNormal();

		createAsmSourceWindow(i_assemblersourcew_, i18n("internal"), WINDOWNAME_INTERNAL_ASM_SOURCE);
	}

}

bool I51BaseInternalROMW::isAtBreakpoint_VirtualPart(void)
{
	bool isAt=false;
	if(isProgramCounterPointingInternalProgramMemory())
	{
		if(i_disassemblew_)
			if(i_disassemblew_->isAtBreakpoint(processor_->readProgramCounterValue()))
			isAt=true;
		if(i_assemblersourcew_)
		{
			if(i_assemblersourcew_->isAtBreakpoint(processor_->readProgramCounterValue()))
				isAt=true;
			if(i_assemblersourcew_->isAtBitChangeBreakpoint(processor_)!=BitChangeBreakpoint::NO_BITCHANGES)
				isAt=true;
		}
	}
	else
		if(I51BaseW::isAtBreakpoint_VirtualPart())
			isAt=true;
	return isAt;
}

void I51BaseInternalROMW::showBreakpoint_VirtualPart(void)
{
	if(isProgramCounterPointingInternalProgramMemory())
	{
		if(i_assemblersourcew_)
			if(i_assemblersourcew_->showBitChangeBreakpoint()||i_assemblersourcew_->isAtBreakpoint(processor_->readProgramCounterValue()))
				i_assemblersourcew_->setFocus();

		if(i_disassemblew_)
			if(i_disassemblew_->isAtBreakpoint(processor_->readProgramCounterValue()))
				i_disassemblew_->setFocus();
	}
	else
		I51BaseW::showBreakpoint_VirtualPart();
}

void I51BaseInternalROMW::showPointerPC(void)
{
	if(isProgramCounterPointingInternalProgramMemory())
	{
		updateProcessorWindows();
		switch(pointerPC_WCount_)
		{
			case 0:
				if(i_disassemblew_)
				{
					i_disassemblew_->setFocus();
					i_disassemblew_->update(processor_->readProgramCounterValue(), processor_->readLastExecutionProgramCounterValue(), lastStepProgramCounterValue);
				}
				break;
			case 1:
				if(i_assemblersourcew_)
				{
					i_assemblersourcew_->setFocus();
					i_assemblersourcew_->updateAsmSource(processor_->readProgramCounterValue(), lastStepProgramCounterValue);
				}
				break;
			case 2:
				if(i_romw_)
				{
					i_romw_->setFocus();
					i_romw_->focusAddress(processor_->readProgramCounterValue());
				}
			default:
				pointerPC_WCount_=-1;
		}
		pointerPC_WCount_++;
		centerActiveWindow();
	}
	else
		I51BaseW::showPointerPC();

}

//Messages UM:t
void I51BaseInternalROMW::messageFromWorkspaceW_SetExecutionPoint_VirtualPart(const QString& name, const unsigned long address)
{
	if(name==WINDOWNAME_INTERNAL_ASM_SOURCE)
	{
		if(i_disassemblew_)
			i_disassemblew_->clearExecutionPoint();
	}
	if(name==WINDOWNAME_INTERNAL_DISASSEMBLE)
	{
		if(i_assemblersourcew_)
			i_assemblersourcew_->clearExecutionPoint();
	}
}


void I51BaseInternalROMW::messageFromWorkspaceW_ToggleBreakpointBit_VirtualPart(const QString& name, int const  bitAddress, bool const bitValue)
{
	if((name==WINDOWNAME_INTERNAL_ASM_SOURCE)&&i_assemblersourcew_)
		i_assemblersourcew_->toggleBitChangeBreakpoint(bitAddress, bitValue);
}

void I51BaseInternalROMW::messageFromWorkspaceW_FocusProgramMemoryAddress_VirtualPart(const QString& name, const unsigned long address)
{
	if(processor_->readPinValue(pinEA_Index_))
	{
		if(i_assemblersourcew_)
			i_assemblersourcew_->focusLine(address);
		if(i_disassemblew_)
			i_disassemblew_->focusLine(address);
		if(i_romw_)
			i_romw_->focusAddress(address);
	}
}

void I51BaseInternalROMW::loadFilesAndCreateWindows(const QString& hexFilename)
{
	loadFilesAndCreateAll(hexFilename);
}

void I51BaseInternalROMW::copy_VirtualPart(I51BaseW* sourceProcessorW)
{
	//Internal program
	QString qStrApu;
	if(sourceProcessorW->isReadyToRun())
	{
		sourceProcessorW->setEAPin(true);
		qStrApu=sourceProcessorW->readEAPinPointingProgramMemoryFilename();
		if(qStrApu!=QString::null)
		{
			setEAPin(true);
			loadFilesAndCreateWindows(qStrApu);
		}
	}
}

QString I51BaseInternalROMW::readEAPinPointingProgramMemoryFilename(void) const
{
	if(processor_->readPinValue(pinEA_Index_))
		return internalProgramMemoryHexFilename_;
	return I51BaseW::readEAPinPointingProgramMemoryFilename();
}

void I51BaseInternalROMW::setCaptionAndIconToProgramMemoryWs(KPixmap const &icon)
{
	unsigned long address=processor_->readProgramCounterValue();

	if(isProgramCounterPointingInternalProgramMemory())
	{
		I51BaseW::setCaptionAndIconToProgramMemoryWs(nullIcon_);

		setPlainCaption(captionIndexText_+internalProgramMemoryHexFilename_);
		if(i_disassemblew_)
			i_disassemblew_->setIcon(icon);
		if(i_assemblersourcew_)
			i_assemblersourcew_->setIcon(icon);
		if(i_romw_)
			i_romw_->setIcon(icon);

	}
	else
	{
		if(i_disassemblew_)
			i_disassemblew_->setIcon(nullIcon_);
		if(i_assemblersourcew_)
			i_assemblersourcew_->setIcon(nullIcon_);
		if(i_romw_)
			i_romw_->setIcon(nullIcon_);

		I51BaseW::setCaptionAndIconToProgramMemoryWs(icon);
	}
}

void I51BaseInternalROMW::saveDataToFileStream_VirtualPart(QDataStream& saveFileStream)
{
	setEAPin(true);
	saveFileStream<<readEAPinPointingProgramMemoryFilename(); //Ulkoisen ohjelmamuistin ohjelma QString

	if(i_disassemblew_)
		i_disassemblew_->saveDataToFileStream(saveFileStream);
	if(i_assemblersourcew_)
		i_assemblersourcew_->saveDataToFileStream(saveFileStream);
}

void I51BaseInternalROMW::readDataFromFileStream_VirtualPart(QDataStream& readFileStream)
{
	QString intFNQStr;
	readFileStream>>intFNQStr;
	if(intFNQStr!=QString::null) //Sisäisen ohjelmamuistin ohjelma, jos on
	{
		setEAPin(true);
		loadFilesAndCreateWindows(intFNQStr);
	}

	if(i_disassemblew_)
		i_disassemblew_->readDataFromFileStream(readFileStream);
	if(i_assemblersourcew_)
		i_assemblersourcew_->readDataFromFileStream(readFileStream);

}
