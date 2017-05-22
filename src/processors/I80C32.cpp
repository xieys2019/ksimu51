//
// C++ Implementation: I80C32
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "I80C32.h"

//Muodostin
I80C32::I80C32():I8032(),I80C31()
{
	processorName_="80C32";
}

//Hajotin
I80C32::~I80C32()
{
}

void I80C32::reset_VirtualPart()
{
	I8032::reset_VirtualPart();      //Kutsutaan kantaluokan resettiä
	I80C31::reset_VirtualPart();      //Kutsutaan toisen kantaluokan resettiä
}

//Ohjaa sarjaportin lähetystä eri moodeissa
//Muutos edelliseen kantaluokkaan: kello ja timerijakajat.
void I80C32::serialPortRxTxHandling(void)
{
	using namespace I80C32_NameS;
	//Määritellään jakajat uusiksi
	//Alku on sama kuin 80C31 luokassa.
	if(internalDataMemory_[PCON].readValue()&PCON_SMOD)
	{
		uart_->setMode1Mode3TimerDivider(16);
		uart_->setMode2ClockDivider(32);
	}
	else
	{
		uart_->setMode1Mode3TimerDivider(32);
		uart_->setMode2ClockDivider(64);
	}
	I8032::serialPortRxTxHandling(); //Kutsutaan kantaluokan ohjelma, tässä 8032
}

void I80C32::saveDataToFileStream(QDataStream& saveFileStream)
{
	//Käydään kantaluokissa ettei tule overridea
	I8032::saveDataToFileStream(saveFileStream);
	I80C31::saveDataToFileStream(saveFileStream);
}

void I80C32::readDataFromFileStream(QDataStream& readFileStream)
{
	//Kantaluokat ettei overridea
	I8032::readDataFromFileStream(readFileStream);
	I80C31::readDataFromFileStream(readFileStream);
}

