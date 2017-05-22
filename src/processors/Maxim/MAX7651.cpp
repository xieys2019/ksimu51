//
// C++ Implementation: MAX7651
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "MAX7651.h"

//Muodostin
MAX7651::MAX7651(): MAX765x(INTERNAL_PROGRAM_MEMORY_SIZE)
{
	processorName_="MAX7651";
	createAnalogInputPins();
}

//Hajotin
MAX7651::~MAX7651()
{
}

void MAX7651::createAnalogInputPins(void)
{
	//ANALOGISET INPUTPINNIT uusi määritys 3.3V
	analogInputPins_.appendPin(PINNAME_AIN0, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN1, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN2, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN3, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN4, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN5, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN6, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_AIN7, 1.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_ACOM, 2.5, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_VREFP, 5.0, 0.0, 5.0);
	analogInputPins_.appendPin(PINNAME_VREFN, 0.0, 0.0, 5.0);
	aPinAIN0_Index_=analogInputPins_.readIndex(PINNAME_AIN0);
	aPinAIN1_Index_=analogInputPins_.readIndex(PINNAME_AIN1);
	aPinAIN2_Index_=analogInputPins_.readIndex(PINNAME_AIN2);
	aPinAIN3_Index_=analogInputPins_.readIndex(PINNAME_AIN3);
	aPinAIN4_Index_=analogInputPins_.readIndex(PINNAME_AIN4);
	aPinAIN5_Index_=analogInputPins_.readIndex(PINNAME_AIN5);
	aPinAIN6_Index_=analogInputPins_.readIndex(PINNAME_AIN6);
	aPinAIN7_Index_=analogInputPins_.readIndex(PINNAME_AIN7);
	aPinACOM_Index_=analogInputPins_.readIndex(PINNAME_ACOM);
	aPinVREFP_Index_=analogInputPins_.readIndex(PINNAME_VREFP);
	aPinVREFN_Index_=analogInputPins_.readIndex(PINNAME_VREFN);

}

