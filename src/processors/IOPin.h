//
// C++ Interface: IOPin
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//

#ifndef IOPIN_H
#define IOPIN_H

#include<string>
#include "Global_NameS.h"

using namespace Global_NameS;

class IOPin
{
	public:
		//Tyyppimuunnos ylikuormitusta varten?!?!?!?
		class PinID{public:int id_;};
		IOPin::PinID NO_ID(void){return NO_ID_;}

		enum pintypes
		{
			PINTYPE_INPUT=1,
			PINTYPE_OUTPUT,
			PINTYPE_BIDIR_LEFT,
			PINTYPE_BIDIR_RIGHT
		};
		static bool const INPUT=false;
		static bool const OUTPUT=true;
		
		IOPin(void);
		IOPin(string const pinName, IOPin::PinID const id, unsigned char const  pinType);
		IOPin(IOPin* sourcePin);
		virtual ~IOPin(void);

		void writeValue(bool const  pinValue, bool const  setFlag); //Ei merkkaa muuttuneeksi jos flag false
		bool isValueChanged(void);
		bool readValue(bool const  clearFlag);      //Poistaa muuttunut merkkauksen jos flag true

		void changeID(IOPin::PinID const id);   //Voidaan vaihtaa indeksinumero
		IOPin::PinID readID(void){return id_;};

		unsigned char readType(void);
		bool isOut(void);
		bool isIn(void);
		bool isBidir(bool& leftRight);
		bool setDirection(bool const  dir); //Muuttaa pinnin suunnan vain jos kaksisuuntainen 0=in 1=out

		bool isInHizState(void);
		void setHizState(bool const  state);

		string readName(void){return name_;};

		IOPin* next(void);
		void setNextPin(IOPin* nextP);

	protected:
		bool changed_;
		bool value_;
		bool hizState_; //Korkeaimpedanssitila.
		bool direction_; //0=input 1=Output
		bool bidir_;   //Kaksisuuntainen suunat voidaan vaihtaa
		bool bidirLeftRight_; //Onko kaksisuuntainen vasemmalla vai oikeella. Left=true; Right=false
		string name_;
		IOPin::PinID id_;   //Voidaan antaa indeksi konstruktorissa -1 = indeksitön

		IOPin *nextPin_;
		
	private:
		void setDefaultValues(void);
		IOPin::PinID NO_ID_;
};

#endif
