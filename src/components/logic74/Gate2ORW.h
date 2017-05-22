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
#ifndef GATE2ORW_H
#define GATE2ORW_H

#include "Gate2NANDW.h"

class Gate2NANDW;

//Periytetty luokasta Gate2NANDW muuttamaalla logiikkaoperaatiota.

class Gate2ORW : public Gate2NANDW
{
	Q_OBJECT
	public:
		Gate2ORW(QWidget* parent, char const * name, int wflags, unsigned int const  componentNumber, unsigned int const  componentType);
		~Gate2ORW();

	protected:
		bool logic2Operation(IOPin* inA, IOPin* inB);

	private:

		static double const  DELAYTIME=0.000000009; //9ns TYP 25degreesC

		void loadComponentXPMImage(void);

};


#endif
