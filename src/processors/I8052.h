//
// C++ Interface: I8052
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//Johdettu luokaista i8031 -> i8032
#ifndef I8052_H
#define I8052_H

#include "I8032.h"
#include "I8051.h"

class I8052: virtual public I8051, virtual public I8032
{
	public:
		I8052();
		~I8052();

	protected:
		void reset_VirtualPart(void);
	
	private:
		static unsigned long const  INTERNAL_PROGRAM_MEMORY_SIZE=0x2000;

};

#endif
