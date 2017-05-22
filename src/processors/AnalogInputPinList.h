//
// C++ Interface: AnalogInputPinList
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef ANALOGINPUTPINLIST_H
#define ANALOGINPUTPINLIST_H

#include <string>
#include <qdatastream.h>

#include "AnalogInputPin.h"

class AnalogInputPinList
{
	public:
		AnalogInputPinList(void);
		virtual ~AnalogInputPinList(void);
		void writeValue(string name, float const  fVal); //Asetataan pinnin arvo nimellä
		void writeValue(int const index, float const  fVal); //Asetataan pinnin arvo indexillä
		bool isChangedValues(void){return changedValues_;};//Voidaan päivitystä varten katsoa onko arvoa/ja muutettu
		float readValue(string name); //Luetaan pinnin arvo nimellä
		float readValue(int const index);

		int readIndex(string name);

		AnalogInputPin* readPins(void); //
		//Luokka joka on listarakenne.

		void appendPin(string const name, float const  fVal, float const  minVal, float const  maxVal);//oletus arvot

		//Pinnitilojen tallennus work fileen. Ei ANSI mukainen vaan QT
		void saveDataToFileStream(QDataStream& saveFileStream);
		void readDataFromFileStream(QDataStream& readFileStream);

	protected:
	private:
		AnalogInputPin *pinList_; //Osoitin listan alkuun
		AnalogInputPin *pinListLastMember_;   //Osoitin viimeismpään jäseneneen
		bool firstPinToAdd_; //Pinnilistan aloitus merkki
		bool changedValues_;
};

#endif
