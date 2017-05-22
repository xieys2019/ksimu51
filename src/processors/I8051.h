//
// C++ Interface: I8051
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
// Muodostettu i8031 luokasta


#ifndef I8051_H
#define I8051_H

#include "I8031.h"
#include "I8051_ExternalCycle.h"
#include "I8051_NameS.h"

class I8051 : virtual public I8031
{
	public:
		I8051();
		~I8051();
		void clearProgramMemory(void);
		void writeProgramMemory(unsigned int const address, unsigned char const value);
		unsigned char readInternalProgramMemoryValue(unsigned int const  address);
		unsigned long readInternalProgramMemorySize(void);

		unsigned char readInstructionDoCycle(bool const readOnlyInstruction);
	
	protected:
		void reset_VirtualPart(void);
		
		MemoryTable* internalProgramMem;

	private:
		static unsigned int const  INTERNAL_PROGRAM_MEMORY_SIZE=0x1000;

};

#endif
