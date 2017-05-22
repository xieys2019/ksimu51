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
#ifndef IOPORTPIN_H
#define IOPORTPIN_H

#include <string>

#include "../processors/IOPin.h"

class IOPortPin: public IOPin
{
	public:
		IOPortPin();
		IOPortPin(unsigned int const  addr, string const pinName, IOPin::PinID const  id);
		~IOPortPin();
		unsigned int readAddress(void);

		IOPortPin* next(void);      //Tyyppimuunnos
		
	protected:
		unsigned int address_;

};

#endif
