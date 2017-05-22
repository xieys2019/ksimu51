//
// C++ Interface: MAX7652
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef MAX7652_H
#define MAX7652_H

#include "MAX765x.h"

class MAX7652 : public MAX765x
{
	public:
		MAX7652(void);
		virtual ~MAX7652(void);

	private:
		static unsigned long const  INTERNAL_PROGRAM_MEMORY_SIZE=0x4000;
		void createAnalogInputPins(void); //UM
};

#endif
