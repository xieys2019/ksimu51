/***************************************************************************
*   Copyright (C) 2005 by Heikki Pulkkinen   *
*   heikki@CompaQ7113EA   *
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
#ifndef T89C51RD2_32_H
#define T89C51RD2_32_H

#include "T89C51RD2x.h"

#include<cmath>

class T89C51RD2_32:  public T89C51RD2x
{
	public:
		T89C51RD2_32();
		virtual ~T89C51RD2_32();

	private:
		static unsigned long const  INTERNAL_PROGRAM_MEMORY_SIZE=0x10000; //64K
		static unsigned int const  INTERNAL_XRAM_MEMORY_SIZE=0x400;
		static unsigned int const  INTERNAL_XRAM_START_ADDRESS=0x0;

};
#endif
