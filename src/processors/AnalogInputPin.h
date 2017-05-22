//
// C++ Interface: AnalogInputPin
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef ANALOGINPUTPIN_H
#define ANALOGINPUTPIN_H

#include <string>
#include "Global_NameS.h"

using namespace Global_NameS;

class AnalogInputPin
{
	public:
		AnalogInputPin(void);
		AnalogInputPin(string pName, float const  fV, float const  minV, float const  maxV);
		virtual ~AnalogInputPin(void);

		float readValue(void);
		float readMin(void);
		float readMax(void);
		void writeValue(float const  fV);
		string readName(void);

		AnalogInputPin* nextAnalogInputPin_;   //Mahdollistaa listarakenteen.

	private:
		string name_;      //Voidaan lukea, mutta ei vaihtaa. Konstruktorissa asetetaan.
		float value_;
		float minValue_;   //Voidaan lukea, mutta ei vaihtaa. Konstruktorissa asetetaan.
		float maxValue_;   //Voidaan lukea, mutta ei vaihtaa. Konstruktorissa asetetaan.
};

#endif
