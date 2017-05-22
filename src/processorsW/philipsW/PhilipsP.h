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
#ifndef PHILIPSP_H
#define PHILIPSP_H

//Käyttöluokka:

#include "../ProcessorsWC.h"

class ProcessorsWC;

class PhilipsProcessors : public ProcessorsWC
{
	public:
		PhilipsProcessors();
		~PhilipsProcessors();

		void addMenu(QWidget* parent, KPopupMenu* popupMenu);

		#define PROCESSORWGROUPNAME_PHILIPS "PhilipsProcessorsW"
		enum philipsProcessors
		{
			PHILIPS_P8031,
		};

	protected:


		I51BaseW* addProcessorW_VirtualPart(QWidget* workspaceToAdd, int const  index, int const  type);

};

#endif
