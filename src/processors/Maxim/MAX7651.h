//
// C++ Interface: MAX7651
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MAX7651_H
#define MAX7651_H

#include "MAX765x.h"

class MAX7651 : public MAX765x
{
	public:
		MAX7651();
		virtual ~MAX7651();

	private:
		static unsigned long const  INTERNAL_PROGRAM_MEMORY_SIZE=0x4000;
		void createAnalogInputPins(void); //UM
};

#endif
