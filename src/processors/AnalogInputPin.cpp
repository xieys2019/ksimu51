//
// C++ Implementation: AnalogInputPin
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "AnalogInputPin.h"


AnalogInputPin::AnalogInputPin(void)
{
	name_="AIN";
	minValue_=0.0;
	maxValue_=5.0;
	value_=0.0;
	nextAnalogInputPin_=0;
}


AnalogInputPin::AnalogInputPin(string pName, float const  fV, float const  minV, float const  maxV)
{
	name_=pName;
	minValue_=minV;
	maxValue_=maxV;
	value_=fV;
	nextAnalogInputPin_=0;
}

AnalogInputPin::~AnalogInputPin(void)
{
}

float AnalogInputPin::readValue(void)
{
	return value_;
}

float AnalogInputPin::readMin(void)
{
	return minValue_;
}

float AnalogInputPin::readMax(void)
{
	return maxValue_;
}

void AnalogInputPin::writeValue(float const  fV)
{
	if(fV<minValue_)
		value_=minValue_;
	else
		if(fV>maxValue_)
			value_=maxValue_;
		else
			value_=fV;
}

string AnalogInputPin::readName(void)
{
	return name_;
}
