//
// C++ Implementation: Memory
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#include "Memory.h"

Memory::Memory(void)
{
	changed_=false;
	changedAfterClear_=false;
	memoryValue_=0;
}

Memory::~Memory(void)
{
}

inline void Memory::changedToTrue(void)
{
	changed_=true;
	changedAfterClear_=true;
}

void Memory::clear(void)
{
	changed_=false;
	changedAfterClear_=false;
	memoryValue_=0;
}

bool Memory::isChanged(void)
{
	bool c=changed_;
	changed_=false;
	return c;
}

unsigned char Memory::readValue(void)
{
	return memoryValue_;
}

void Memory::writeValue(unsigned char const v, bool const changedAfterClearBit)
{
	memoryValue_=v;
	changedAfterClear_=changedAfterClearBit;
}

Memory& Memory::operator=(Memory const& r)
{
	changedToTrue();
	memoryValue_=r.memoryValue_;
	return *this;
}

Memory& Memory::operator=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_=c;
	return *this;
}

Memory& Memory::operator|=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_|=c;
	return *this;
}

Memory& Memory::operator&=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_&=c;
	return *this;
}

Memory& Memory::operator^=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_^=c;
	return *this;
}

Memory& Memory::operator++(void)
{
	changedToTrue();
	memoryValue_++;
	return *this;
}

Memory& Memory::operator--(void)
{
	changedToTrue();
	memoryValue_--;
	return *this;
}

Memory& Memory::operator+=(Memory const& r)
{
	changedToTrue();
	memoryValue_=static_cast<unsigned char>(memoryValue_+r.memoryValue_);
	return *this;
}

Memory& Memory::operator+=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_=static_cast<unsigned char>(memoryValue_+c);
	return *this;
}

Memory& Memory::operator-=(Memory const& r)
{
	changedToTrue();
	memoryValue_=static_cast<unsigned char>(memoryValue_-r.memoryValue_);
	return *this;
}

Memory& Memory::operator-=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_=static_cast<unsigned char>(memoryValue_-c);
	return *this;
}

Memory& Memory::operator<<=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_=static_cast<unsigned char>(memoryValue_<<c);
	return *this;
}

Memory& Memory::operator>>=(unsigned char const& c)
{
	changedToTrue();
	memoryValue_=static_cast<unsigned char>(memoryValue_>>c);
	return *this;
}

void Memory::saveDataToFileStream(QDataStream& saveFileStream)
{
	saveFileStream<<(Q_UINT8)changed_;
	saveFileStream<<(Q_UINT8)changedAfterClear_;
	saveFileStream<<(Q_UINT8)memoryValue_;

}

void Memory::readDataFromFileStream(QDataStream& readFileStream)
{
	Q_UINT8 value8;

	readFileStream>>value8; changed_=(bool)value8;
	readFileStream>>value8; changedAfterClear_=(bool)value8;
	readFileStream>>value8; memoryValue_=(unsigned char)value8;
}

//External RAM periytymä----------------------------------------------------------------
externalRAM::externalRAM(void)
{
	upd=false;
}

externalRAM::~externalRAM()
{
}

bool externalRAM::update(void)
{
	bool u=upd;
	upd=false;
	return u;
}

externalRAM& externalRAM::operator=(unsigned char const& c)
{
	upd=true;      //Laitetaan myös päivitettäväksi
	changedToTrue();
	memoryValue_=c;
	return *this;
}

void externalRAM::writeValue(unsigned char const v, bool const changedAfterClearBit)
{
	upd=true;
	Memory::writeValue(v, changedAfterClearBit);
}

//Memory Table -------------------------------------------------------------------------------
MemoryTable::MemoryTable(void)
{
	valueChanged=false;
	valueChangedAfterClear=false;
	size=1; //Oletuksena yhden alkion taulukko
	mTable = new Memory[size];
	minChAddress=0;
	maxChAddress=0;
	minChAddressAfterClear=0;
	maxChAddressAfterClear=0;
}

MemoryTable::MemoryTable(unsigned long const memorySize)
{
	valueChanged=false;
	valueChangedAfterClear=false;
	size=memorySize;
	mTable = new Memory[size];
	minChAddress=size-1;
	maxChAddress=0;
	minChAddressAfterClear=size-1;
	maxChAddressAfterClear=0;
}

MemoryTable::~MemoryTable(void)
{
}

unsigned long MemoryTable::readSize(void)
{
	return size;
}

void MemoryTable::clear(void)
{
	valueChangedAfterClear=false;
	minChAddressAfterClear=size-1;
	maxChAddressAfterClear=0;
	for(unsigned int n=0; n<size; n++)
		mTable[n].clear();
}

unsigned char MemoryTable::readValue(unsigned int const address)
{
	if(address<size)
		return mTable[address].readValue();
	else
		return 0;
}

void MemoryTable::writeValue(unsigned int const address, char const value, bool const changedAfterClearBit)
{
	if(address<size)
		mTable[address].writeValue(value, changedAfterClearBit);
}

//Laittaa arvon muuntobittejä muuntaen
void MemoryTable::setValue(unsigned int const address, unsigned char const value)
{
	if(address<size)
	{
		mTable[address]=value;
		valueChanged=true;
		if(address<minChAddress)
			minChAddress=address;
		if(address>maxChAddress)
			maxChAddress=address;
		valueChangedAfterClear=true;
	}
}

bool MemoryTable::isValueChanged(unsigned int& minChangedAddress, unsigned int& maxChangedAddress)
{
	if(valueChanged)
	{
		valueChanged=false;
		minChangedAddress=minChAddress;
		maxChangedAddress=maxChAddress;
		minChAddress=size-1;
		maxChAddress=0;
		return true;
	}
	else
		return false;
}

//Yksittäisen alkion tila vaihtunut
bool MemoryTable::isValueChanged(unsigned int const address)
{
	if(address<size)
		return mTable[address].isChanged();
	else
		return false;
}

bool MemoryTable::isValueChangedAfterClear(unsigned int& minChangedAddress, unsigned int& maxChangedAddress)
{
	if(valueChangedAfterClear)
	{
		minChangedAddress=minChAddressAfterClear;
		maxChangedAddress=maxChAddressAfterClear;
		minChAddressAfterClear=size-1;
		maxChAddressAfterClear=0;
		return true;
	}
	else
		return false;
}

bool MemoryTable::isValueChangedAfterClear(unsigned int const address)
{
	if(address<size)
		return mTable[address].isChangedAfterClear();
	else
		return false;
}

void MemoryTable::saveDataToFileStream(QDataStream& saveFileStream)
{
	saveFileStream<<(Q_UINT32)size;
	for(uint n=0; n<size; n++)
	{
		mTable[n].saveDataToFileStream(saveFileStream);
	}
	saveFileStream<<(Q_UINT8)valueChanged;
	saveFileStream<<(Q_UINT8)valueChangedAfterClear;
	saveFileStream<<(Q_UINT32)minChAddress;
	saveFileStream<<(Q_UINT32)maxChAddress;
	saveFileStream<<(Q_UINT32)minChAddressAfterClear;
	saveFileStream<<(Q_UINT32)maxChAddressAfterClear;
}

void MemoryTable::readDataFromFileStream(QDataStream& readFileStream)
{
	Q_UINT32 value32;
	Q_UINT8 value8;

	readFileStream>>value32;  size=(unsigned long)value32;
	for(uint n=0; n<size; n++)
	{
		mTable[n].readDataFromFileStream(readFileStream);
	}
	readFileStream>>value8; valueChanged=(bool)value8;
	readFileStream>>value8; valueChangedAfterClear=(bool)value8;
	readFileStream>>value32; minChAddress=(unsigned int)value32;
	readFileStream>>value32; maxChAddress=(unsigned int)value32;
	readFileStream>>value32; minChAddressAfterClear=(unsigned int)value32;
	readFileStream>>value32; maxChAddressAfterClear=(unsigned int)value32;
}

//external RAM Table malli periytymä-------------------------------------------------------------
externalDataMemoryTable::externalDataMemoryTable(unsigned long const memorySize) : MemoryTable(memorySize)
{
	toUpdTable=new bool[size];
	toUpd=false;
	for(unsigned long n=0;n<size;n++)
		toUpdTable[n]=false;
	minUpdateA=size-1;
	maxUpdateA=0;
}

externalDataMemoryTable::~externalDataMemoryTable(void)
{
}

bool externalDataMemoryTable::toUpdate(unsigned int& minUpdateAddress, unsigned int& maxUpdateAddress)
{
	if(toUpd)
	{
		minUpdateAddress=minUpdateA;
		maxUpdateAddress=maxUpdateA;
		toUpd=false;
		minUpdateA=size-1;
		maxUpdateA=0;
		return true;
	}
	else
		return false;
}

bool externalDataMemoryTable::toUpdate(unsigned int const address)
{
	if(toUpdTable[address])
	{
		toUpdTable[address]=false;
		return true;
	}
	else
		return false;
}

void externalDataMemoryTable::writeValue(unsigned int const address, char const value, bool const changedAfterClearBit)
{
	if(address<size)
	{
		if(address<minUpdateA)
			minUpdateA=address;
		if(address>maxUpdateA)
			maxUpdateA=address;
		toUpd=true;
		toUpdTable[address]=true;
		MemoryTable::writeValue(address, value, changedAfterClearBit);
	}
}

void externalDataMemoryTable::setValue(unsigned int const address, unsigned char const value)
{
	if(address<size)
	{
		if(address<minUpdateA)
			minUpdateA=address;
		if(address>maxUpdateA)
			maxUpdateA=address;
		toUpd=true;
		toUpdTable[address]=true;
		MemoryTable::setValue(address, value);
	}
}

void externalDataMemoryTable::saveDataToFileStream(QDataStream& saveFileStream)
{
	MemoryTable::saveDataToFileStream(saveFileStream); //Kantaluokan tallennus

	saveFileStream<<(Q_UINT8)toUpd;
	for(unsigned long n=0; n<size; n++)
		saveFileStream<<(Q_UINT8)toUpdTable[n];
	saveFileStream<<(Q_UINT32)minUpdateA;
	saveFileStream<<(Q_UINT32)maxUpdateA;
}

void externalDataMemoryTable::readDataFromFileStream(QDataStream& readFileStream)
{
	MemoryTable::readDataFromFileStream(readFileStream);

	Q_UINT32 value32;
	Q_UINT8 value8;

	readFileStream>>value8; toUpd=(bool)value8;
	for(unsigned long n=0; n<size; n++)
	{
		readFileStream>>value8; toUpdTable[n]=(bool)value8;
	}
	readFileStream>>value32; minUpdateA=(unsigned int)value32;
	readFileStream>>value32; maxUpdateA=(unsigned int)value32;
}
