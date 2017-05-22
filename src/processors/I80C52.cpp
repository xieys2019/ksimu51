//
// C++ Implementation: I80C52
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2005
//
// Copyright: See COPYING file that comes with this distribution
//
//

#include "I80C52.h"

I80C52::I80C52() : I80C32(), I8052()
{
	using namespace I80C52_NameS;
	processorName_="80C52";
	internalDataMemory_[P0].setInUse(true);
	internalDataMemory_[P2].setInUse(true);
}

I80C52::~I80C52()
{
}

//UM resetti
void I80C52::reset_VirtualPart()
{
	using namespace I80C52_NameS;
	I80C32::reset_VirtualPart();      //Kutsutaan kantaluokan resettiä
	I8052::reset_VirtualPart();
	internalDataMemory_[P0]=0xff;
	internalDataMemory_[P2]=0xff;
}
