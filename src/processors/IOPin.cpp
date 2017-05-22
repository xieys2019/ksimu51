//
// C++ Implementation: IOPin
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "IOPin.h"

IOPin::IOPin(void)
{
	setDefaultValues();
}

IOPin::IOPin(string const pinName, IOPin::PinID const  id, unsigned char const  pinType)
{
	setDefaultValues();
	name_=pinName;
	id_=id;
	switch(pinType)
	{
		case PINTYPE_INPUT:
			direction_=false;
			bidir_=false;
			break;
		case PINTYPE_OUTPUT:
			direction_=true;
			bidir_=false;
			break;
		case PINTYPE_BIDIR_LEFT:
			direction_=false; //Jos vasemmalla oletus inputiksi.
			bidir_=true;
			bidirLeftRight_=true;
			break;
		case PINTYPE_BIDIR_RIGHT:
			direction_=true; //Jos oikeella asettaa oletuksen outputiksi.
			bidir_=true;
			bidirLeftRight_=false;
			break;
		default:
			direction_=false;
			bidir_=false;
	}
}


IOPin::IOPin(IOPin* sourcePin)
{
	setDefaultValues();
	name_=sourcePin->readName();
	id_=sourcePin->readID();
	direction_=sourcePin->isOut(); //outputti on true eli suoraan verrannollinen.
	bidir_=sourcePin->isBidir(bidirLeftRight_);
	hizState_=sourcePin->isInHizState();
	value_=sourcePin->readValue(false);
}

void IOPin::setDefaultValues(void)
{
	NO_ID_.id_=-1;
	name_="PIN";
	nextPin_=0;
	id_=NO_ID();
	direction_=false; //Oletus inputti
	bidir_=false;
	bidirLeftRight_=true; //Oletus vasemmalla
	value_=false;
	hizState_=false;
	changed_=false;
}

IOPin::~IOPin(void)
{
}

bool IOPin::readValue(bool const  clearFlag)
{
	if(clearFlag)
		changed_=false;
	return value_;
}

void IOPin::writeValue(bool const  pinValue, bool const  setFlag)
{
	if(value_!=pinValue)
	{
		value_=pinValue;
		if(setFlag)
			changed_=true;
	}
}

void IOPin::changeID(IOPin::PinID const  id)
{
	id_=id;
}

bool IOPin::isValueChanged(void)
{
	return changed_;
}

unsigned char IOPin::readType(void)
{
	if(!bidir_&&!direction_)
		return PINTYPE_INPUT;
	if(!bidir_&&direction_)
		return PINTYPE_OUTPUT;
	if(bidir_&&bidirLeftRight_)
		return PINTYPE_BIDIR_LEFT;
	if(bidir_&&!bidirLeftRight_)
		return PINTYPE_BIDIR_RIGHT;
	return 0;
}

bool IOPin::isOut(void)
{
	return direction_;
}

bool IOPin::isIn(void)
{
	return !direction_;
}

bool IOPin::isBidir(bool& leftRight)
{
	leftRight=bidirLeftRight_;
	return bidir_;
}

bool IOPin::setDirection(bool const  dir)
{
	if(bidir_)
	{
		direction_=dir;
		return true;
	}
	return false;
}

bool IOPin::isInHizState(void)
{
	return hizState_;
}

void IOPin::setHizState(bool const  state)
{
	hizState_=state;
}

IOPin* IOPin::next(void)
{
	return nextPin_;
}

void IOPin::setNextPin(IOPin* nextP)
{
	nextPin_=nextP;
}


