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
#include "I51BaseInternalFLASHW.h"
#include "../processors/I8051_Flash.h"

I51BaseInternalFLASHW::I51BaseInternalFLASHW(QWidget* parent, char const * name, int wflags, int const  index, int const  type) : I51BaseW(parent, name, wflags, index, type), I51BaseInternalROMW(parent, name, wflags, index, type)
{
   flashWNotCreated_=true;
}

I51BaseInternalFLASHW::~I51BaseInternalFLASHW()
{
}
   
void I51BaseInternalFLASHW::updateProgramMemoryWindows(void)
{
   unsigned int minA,maxA; //Osoite saadaan aliaksilta
   I8051_Flash* p = dynamic_cast<I8051_Flash*>(processor_);
   if(p->isFlashMemoryValueChanged(minA, maxA))
   {
      for(unsigned int address=minA;address<=maxA;address++)
      {
         if(p->isFlashMemoryValueChanged(address))
         {
            unsigned char value=p->readInternalProgramMemoryValue(address);
            i_romw_->writeValue(address,value);
         }
      }
   }
   
   I51BaseInternalROMW::updateProgramMemoryWindows();
}

void I51BaseInternalFLASHW::createDynamicWindows_VirtualPart(void)
{
   I8051_Flash* p = dynamic_cast<I8051_Flash*>(processor_);
   unsigned int maxInternalROM=p->readInternalProgramMemorySize();
   if(flashWNotCreated_)
   {
      //ROM olemassa
      if(i_romw_)
      {
         delete i_romw_; i_romw_=0;
      }
      i_romw_=new RomW(windowWorkspace_, WINDOWNAME_INTERNAL_FLASH, WDestructiveClose|WMouseNoMask,0,maxInternalROM);
      i_romw_->setPlainCaption(i18n("INTERNAL FLASH"));
      i_romw_->setGeometry(0, 0, i_romw_->romTableGeometrySize().width()+20, height()/2);
      flashWNotCreated_=false;
   }
/*   unsigned int wState=iromw->windowState();
   iromw->showMinimized();
   
   unsigned long address;
   for(address=0;address<maxInternalROM;address++)
   {
      int value;
      value=processor->readInternalProgramMemoryValue(address);
      iromw->writeValue(address,value);
   }
   if(wState!=Qt::WindowMinimized)
      iromw->showNormal();
   */   
   I51BaseInternalROMW::createDynamicWindows_VirtualPart();
}
