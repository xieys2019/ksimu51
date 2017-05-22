//
// C++ Implementation: AnalogInputPinList
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "AnalogInputPinList.h"

AnalogInputPinList::AnalogInputPinList(void)
{
	firstPinToAdd_=true; //Pinnilistan aloitus merkki
	changedValues_=false;
}

AnalogInputPinList::~AnalogInputPinList(void)
{
	//delete pinList_;
}

//Lisätään uusi pinni listarakenteeseen.
void AnalogInputPinList::appendPin(string const name, float const  fVal, float const  minVal, float const  maxVal)
{
	AnalogInputPin* pinToAdd;
	pinToAdd = new AnalogInputPin(name, fVal, minVal, maxVal);
	if(firstPinToAdd_) //Jos ensimmäinen kerta kutsuvaan ohjelmaan
	{
		pinList_=new AnalogInputPin();
		pinListLastMember_=new AnalogInputPin();
		pinListLastMember_=pinToAdd;
		pinList_=pinListLastMember_;
		firstPinToAdd_=false;
	}
	else
	{
		pinListLastMember_->nextAnalogInputPin_=pinToAdd;
		pinListLastMember_=pinToAdd;
	}
}


//Asetetaan pinnin arvo ulkoa tarkistaa onko pinni inputti
void AnalogInputPinList::writeValue(string name, float const  fVal)
{
	AnalogInputPin *pinToWrite;
	pinToWrite=pinList_;
	while(pinToWrite!=0)
	{
		string pname=pinToWrite->readName();
		if(pname==name)
		{
			pinToWrite->writeValue(fVal);
			break;
		}
		pinToWrite=pinToWrite->nextAnalogInputPin_;
	}
	changedValues_=true;
}

void AnalogInputPinList::writeValue(int const index, float const  fVal)
{
	AnalogInputPin *pinToWrite;
	pinToWrite=pinList_;
	int indexCount=0;
	while(pinToWrite!=0)
	{
		if(indexCount==index)
		{
			pinToWrite->writeValue(fVal);
			break;
		}
		indexCount++;
		pinToWrite=pinToWrite->nextAnalogInputPin_;
	}
	changedValues_=true;
}

//Sisäinen luku
float AnalogInputPinList::readValue(string name)
{
	AnalogInputPin *pinToRead;
	pinToRead=pinList_;
	while(pinToRead!=0)
	{
		string pname=pinToRead->readName();
		if(pname==name)
			return pinToRead->readValue();
		pinToRead=pinToRead->nextAnalogInputPin_;
	}
}

float AnalogInputPinList::readValue(int const index)
{
	AnalogInputPin *pinToRead;
	pinToRead=pinList_;
	int indexCount=0;
	while(pinToRead!=0)
	{
		if(indexCount==index)
			return pinToRead->readValue();
		indexCount++;
		pinToRead=pinToRead->nextAnalogInputPin_;
	}
}

int AnalogInputPinList::readIndex(string name)
{
	AnalogInputPin *pinToRead;
	pinToRead=pinList_;
	int indexCount=0;
	while(pinToRead!=0)
	{
		string pname=pinToRead->readName();
		if(pname==name)
			return indexCount;
		indexCount++;
		pinToRead=pinToRead->nextAnalogInputPin_;
	}
}

//Ulkoinen luku tietojen päivitystä varten
AnalogInputPin* AnalogInputPinList::readPins(void)
{
	changedValues_=false;
	return pinList_;
}

void AnalogInputPinList::saveDataToFileStream(QDataStream& saveFileStream)
{
	AnalogInputPin *pinToSave;
	pinToSave=pinList_;
	while(pinToSave!=0)
	{
		saveFileStream<<(float)pinToSave->readValue();
		pinToSave=pinToSave->nextAnalogInputPin_;
	}
}

void AnalogInputPinList::readDataFromFileStream(QDataStream& readFileStream)
{
	AnalogInputPin *pinToRead;
	pinToRead=pinList_;
	while(pinToRead!=0)
	{
		float valueFloat;
		readFileStream>>valueFloat;
		pinToRead->writeValue(valueFloat);
		pinToRead=pinToRead->nextAnalogInputPin_;
	}
}

