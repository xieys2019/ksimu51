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
#ifndef INTEL80C51W_H
#define INTEL80C51W_H

#include "Intel8051W.h"
#include "../I51BaseW.h"
//#include "../I51BaseInternalROMW.h"

#include "../../processors/I80C51.h"
class I80C51;

class Intel80C51W : virtual public I51BaseW, public Intel8051W
{
	Q_OBJECT
	public:
		Intel80C51W(QWidget* parent, char const * name, int wflags, int const  index, int const  type);
		~Intel80C51W();
};

#endif
