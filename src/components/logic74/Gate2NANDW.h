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
#ifndef GATE2NANDW_H
#define GATE2NANDW_H

#include "Logic74B.h"

class Logic74BaseW;

class Gate2NANDW : public Logic74BaseW
{
	Q_OBJECT
	public:
		Gate2NANDW(QWidget* parent, char const * name, int wflags, unsigned int const  componentNumber, unsigned int const  componentType);
		~Gate2NANDW();

	protected:
		void execute_VirtualPart_ExecuteInputChange_ExecutionReady_VirtualPart(void);

		virtual bool logic2Operation(IOPin* inA, IOPin* inB);

		IOPin *pTo1APin_;
		IOPin *pTo1BPin_;
		IOPin *pTo1YPin_;

		#define PINNAME_1A "1A"
		#define PINNAME_1B "1B"
		#define PINNAME_1Y "1Y"

	private:

		static double const  DELAYTIME=0.000000009; //9ns TYP 25degreesC

		void loadComponentXPMImage(void);

};


#endif
