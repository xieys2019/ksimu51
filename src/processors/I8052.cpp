//
// C++ Implementation: I8052
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "I8052.h"

I8052::I8052() : I8051(), I8032()
{
	processorName_="8052";
	delete internalProgramMem;      //Deletoidaan kantaluokan sama
	internalProgramMem=new MemoryTable(INTERNAL_PROGRAM_MEMORY_SIZE);
	clearProgramMemory();
}

I8052::~I8052()
{
	//delete internalProgramMem;
}


void I8052::reset_VirtualPart()
{
	//kutsutaan kantaluokan resettiä
	I8051::reset_VirtualPart();
	I8032::reset_VirtualPart();
}

