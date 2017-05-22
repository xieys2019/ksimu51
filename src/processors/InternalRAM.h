//
// C++ Interface: InternalRAM
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef INTERNALRAM_H
#define INTERNALRAM_H

#include "Memory.h"

class InternalRAM : public Memory
{
	public:
		InternalRAM();
		~InternalRAM();

		InternalRAM& operator=(unsigned char const& c);

		void setInUse(bool const trueFalse){inUse_=trueFalse;};
		void setIsBitAddressable(bool const trueFalse){bitAddressable_=trueFalse;};
		void setIsBitNames(bool const trueFalse){bitNames_=trueFalse;};
		void setIsDirect(bool const trueFalse){direct_=trueFalse;};
		void setIsIndirect(bool const trueFalse){indirect_=trueFalse;};
		void setIsRegisterBank(bool const trueFalse){registerBank_=trueFalse;};
		void setIsSFR(bool const trueFalse){sfr_=trueFalse;};
		void setIsPort(bool const trueFalse){port_=trueFalse;};

		bool isInUse(void){return inUse_;};
		bool isBitAddressable(void){return bitAddressable_;};
		bool isBitNames(void){return bitNames_;};
		bool isDirect(void){return direct_;};
		bool isIndirect(void){return indirect_;};
		bool isRegisterBank(void){return registerBank_;};
		bool isSFR(void){return sfr_;};
		bool isPort(void){return port_;};

	private:

		bool inUse_;            //Käytössä
		bool bitAddressable_;            //Bittiosoitettava
		bool bitNames_;      //Bitit nimetty
		bool direct_;         //Suorasti osoitettava
		bool indirect_;      //Epäsuorasti osoitettava
		bool registerBank_;   //Rekisteripankki
		bool sfr_;            //Special Function register
		bool port_;         //SFR:n I/O portti rekkari
		unsigned char canReadBits_;      //Maski biteistä jotka voidaan lukea
		unsigned char canWriteBits_;   //Maski biteistä jotka voidaan muuttaa.


};

#endif
