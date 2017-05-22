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
#ifndef BITCHANGEBREAKPOINT_H
#define BITCHANGEBREAKPOINT_H

#include <qvaluelist.h>

#include "../processors/I8031.h"
class I8031;

//BitAddressable area and sfrArea bitchange breakpoint list class
class BitChangeBreakpoint
{
	public:
		BitChangeBreakpoint();
		~BitChangeBreakpoint();

		//bitAddress: Upper=Address, lower=Bitnumber
		bool toggleBreakpoint(unsigned int const bitAddress, bool const currentValue);
		unsigned int isBreakpointsAtBitChange(I8031* const processor);
		bool isBitBreakpointBit(unsigned int const& bitAddress);
		unsigned int lastBreakpoint(void){return breakpoint_;};
		static unsigned int const NO_BITCHANGES=0x00F0;

	private:
		//Upper 8bit address; lower 8 bit bit number and Value: Value upper half nibble
		QValueList<unsigned int>breakpointBitList_;
		unsigned int breakpoint_;
};

#endif
