//
// C++ Interface: I80C51
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//Cmos versio 8051:stä
//Perii ominaisuutensa luokista:
//i80C31 ja i8051

#ifndef I80C51_H
#define I80C51_H

#include "I8051.h"
#include "I80C31.h"

class I80C51:  public I8051, public I80C31
{
	public:
		I80C51(void);
		virtual ~I80C51(void);
	protected:
		void reset_VirtualPart(void);
};

#endif
