//
// C++ Implementation: I8051
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "I8031.h"
#include "I8051.h"


//Muodostin
I8051::I8051():I8031()
{
	using namespace I8051_NameS;
	
	processorName_="8051";
	internalProgramMem=new MemoryTable(INTERNAL_PROGRAM_MEMORY_SIZE);
	pinList_.setPin(PINNAME_EA, true, false);
	internalDataMemory_[P0].setInUse(true);
	internalDataMemory_[P2].setInUse(true);
	
	delete externalCycleList_;
	externalCycleList_=new I8051_ExternalCycle(pinList_.readIndex(PINNAME_ALE), pinList_.readIndex(PINNAME_PSEN), pinList_.readIndex(PINNAME_RESET), pinList_.readIndex(PINNAME_EA), P0, P1, P2, P3);

	clearProgramMemory();
}

//Hajotin
I8051::~I8051()
{
	delete internalProgramMem;
}

void I8051::reset_VirtualPart()
{
	using namespace I8051_NameS;
	internalDataMemory_[P0]=0xff;
	internalDataMemory_[P2]=0xff;
}

void I8051::clearProgramMemory(void)
{
	using namespace I8051_NameS;
	//Nollataan se muistialue jota käytetään
	if(pinList_.readValue(PINNAME_EA, true))
	{
		unsigned long s=internalProgramMem->readSize();
		for(unsigned long n=0;n<s;n++)
			internalProgramMem->writeValue(n, 0xFF, false); //Kaikki bitit päälle koska EPROM tms. Ei muutata changedAfterClearia
}
	else
	{
		for(unsigned int n=MIN_EXTERNAL_PROGRAM_MEMORY_ADDRESS;n<=MAX_EXTERNAL_PROGRAM_MEMORY_ADDRESS;n++)
			externalProgramMemory_[n]=0xFF; //Kaikki bitit päälle koska EPROM tms.
	}
	programSize_=0;
}

void I8051::writeProgramMemory(unsigned int const address, unsigned char const value)
{
	if(pinList_.readValue(pinEA_Index_, true))
	{
		//Ei kirjoiteta yli sisäisen ROMMIN
		if((address<internalProgramMem->readSize()))
			//internalProgramMemory[address]=value;
			internalProgramMem->writeValue(address,value,false);
	}
	else
		externalProgramMemory_[address]=value;
	//Ohjelman koon laskeminen.
	if(address>programSize_)
		programSize_=address;
}

unsigned char I8051::readInstructionDoCycle(bool const readOnlyInstruction)
{
	using namespace I8051_NameS;
	if(pinList_.readValue(pinEA_Index_, true) && (programCounter_<internalProgramMem->readSize()))
	{
		unsigned char retVal=internalProgramMem->readValue(programCounter_);
		//Lisätään external cycle listaa ilman PSEN pulssia ja porttien muunoksia, tekee vain ALE pulssin
		if(!readOnlyInstruction)
		{
			alePulses_Type aPulses=dynamic_cast<I8051_ExternalCycle*> (externalCycleList_)->appendToExternalCycle_nonPSENPulseCycle(programCounter_);
			oneStepAlePulses_+=aPulses;
			addClockTicksAndHandlePeripherals(aPulses);
			programCounter_++;
		}
		return retVal;
	}
	else
	{
		return I8031::readInstructionDoCycle(readOnlyInstruction); //Kantaluokasta
	}
}

unsigned long I8051::readInternalProgramMemorySize(void)
{
	return internalProgramMem->readSize();
}

unsigned char I8051::readInternalProgramMemoryValue(unsigned int const  address)
{
	return internalProgramMem->readValue(address);
}

