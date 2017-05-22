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
#ifndef I51BASEADCONVERTERW_H
#define I51BASEADCONVERTERW_H

#include "I51BaseW.h"
#include "../processors/I8031_ADConverter.h"

class I51BaseW;
class AnalogInputExternalW : public ExternalW
{
	Q_OBJECT
	public:
		AnalogInputExternalW(I8031* processor, QWidget* parent, char const * name, int wflag);
		~AnalogInputExternalW();
	
	private slots:
		void analogInputPinListValueChanged(int, QString& name, double dV);

	private:
		//Analog input
		bool isAnalogInput_;
		KToolBar* analogInputPinsTools_;
		IndexedKDoubleNumInput* analogInputPinInput_;

		//AD-konvertterin inputpinnit: jos prosessori luo.
		void addAnalogInputPins(AnalogInputPin* aiPinList);
	
};

class I51BaseADConverterW : virtual public I51BaseW
{
	Q_OBJECT
	public:
		I51BaseADConverterW(QWidget* parent, char const * name, int wflags, int const  index, int const  type);
		~I51BaseADConverterW();

		void createExternalAreaWindow(void); //UM

	protected:
		void saveDataToFileStream_VirtualPart(QDataStream& saveFileStream);
		void readDataFromFileStream_VirtualPart(QDataStream& readFileStream);

	private:
		#define WINDOWNAME_ADCONVERTER "ad_converterW"

};

#endif
