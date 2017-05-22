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
#ifndef INTEL8051W_H
#define INTEL8051W_H

#include "../I51BaseW.h"
#include "../I51BaseInternalROMW.h"

#include "../../processors/I8051.h"
class I8051;

class Intel8051W : virtual public I51BaseW, public I51BaseInternalROMW
{
	Q_OBJECT
	public:
		Intel8051W(QWidget* parent, char const * name, int wflags, int const  index, int const  type);
		~Intel8051W();
};

#endif
