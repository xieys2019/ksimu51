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
#ifndef I8031_XRAM_H
#define I8031_XRAM_H

#include "I8031.h"

class I8031_Xram : virtual public I8031
{
	public:
		I8031_Xram(unsigned long const xramStartAddress, unsigned long const xramSize);
		~I8031_Xram();

		void writeInternalXRAMValue(unsigned int const , unsigned char );
		unsigned char readInternalXRAMValue(unsigned int const );
		unsigned long readInternalXRAMSize(unsigned int& );
		bool isInternalXRAMValueChanged(unsigned int const );
		bool isInternalXRAMValueChanged(unsigned int& , unsigned int& );
	protected:
		MemoryTable* xram_;

	private:
		I8031_Xram(){;};
		unsigned long startAddress_;
};

#endif
