//
// C++ Interface: I80C32
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//Cmos versio 8031:stä
//Perii ominaisuutensa luokista i80C31 ja i8032

#ifndef I80C32_H
#define I80C32_H

#include "I80C31.h"
#include "I8032.h"
#include "I80C32_NameS.h"


class I80C32: virtual public I8032, virtual public I80C31
{
	public:
		I80C32(void);
		virtual ~I80C32(void);

		void saveDataToFileStream(QDataStream& saveFileStream);
		void readDataFromFileStream(QDataStream& readFileStream);

	protected:
		void reset_VirtualPart(void);
		
		//Uudelleenmääritys koska SMOD bitti kolla voidaan nopeuttaa baudeja
		//Uudelleenmääritys 80C31:stä Timer 2 baudrate geniksenä
		//Lähetetään sarjaportista, tekee keskytyksen TI
		void serialPortRxTxHandling(void);
};

#endif
