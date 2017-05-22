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
#include "MaximMAX7652W.h"


MaximMAX7652W::MaximMAX7652W(QWidget* parent, char const * name, int wflags, int const  index, int const  type) : I51BaseW(parent, name, wflags, index, type), MaximMAX7651W(parent, name, wflags, index, type)
{

	delete processor_; //Deletoidaan kantaluokassa luotu prosessori
	processor_=new MAX7652; //Luodaan tämän oma prosessori
}

MaximMAX7652W::~MaximMAX7652W()
{
}

/*
void MaximMAX7652W::updateProcessorWindows_VirtualPart(void)
{
	I51BaseInternalROMW::updateProcessorWindows_VirtualPart();
	I51BaseInternalIRAMW::updateProcessorWindows_VirtualPart();
}
*/
			
