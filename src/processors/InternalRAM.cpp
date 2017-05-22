//
// C++ Implementation: InternalRAM
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "InternalRAM.h"

InternalRAM::InternalRAM()
{
	inUse_=false;
	bitAddressable_=false;
	bitNames_=false;
	direct_=false;
	indirect_=false;
	registerBank_=false;
	sfr_=false;
	port_=false;
	canReadBits_=0xFF;
	canWriteBits_=0xFF;
}

InternalRAM::~InternalRAM()
{
}

InternalRAM& InternalRAM::operator=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_=c;
	return *this;
}

