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
#ifndef INTERNALXRAMW_H
#define INTERNALXRAMW_H

#include "InternalRAMW.h"

class InternalRAMW;

class InternalXRAMW : public InternalRAMW
{
	Q_OBJECT
	public:
		InternalXRAMW( QWidget* parent, char const * name, int wflags, unsigned int const  startAddress, unsigned int const  size, bool const  charColumn);
		~InternalXRAMW(void);

	protected:

	signals:

	private slots:

	private:
};

#endif
