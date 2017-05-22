//
// C++ Interface: Memory
//
// Description:
//
//
// Author: Heikki Pulkkinen <heikki@CompaQ7113EA>, (C) 2006
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef I51MEMORY_H
#define I51MEMORY_H


#include <qdatastream.h>

//Muistin kantaluokka
class Memory
{
	public:
		Memory();
		virtual ~Memory();

		//Sijoitusoperaatiot
		//Sijoittaa arvot muuntavasti
		Memory& operator=(unsigned char const& c);
		Memory& operator=(Memory const& r);

		//Loogiset sijoitusoperaatiot
		Memory& operator|=(unsigned char const& c);
		Memory& operator&=(unsigned char const& c);
		Memory& operator^=(unsigned char const& c);

		//Laskuoperaatiot
		Memory& operator++(void);
		Memory& operator--(void);

		//Lasku Sijoitus
		virtual Memory& operator+=(Memory const& r);
		Memory& operator+=(unsigned char const& c);

		virtual Memory& operator-=(Memory const& r);
		Memory& operator-=(unsigned char const& c);

		//Bittioperaatiot
		Memory& operator<<=(unsigned char const& c);
		Memory& operator>>=(unsigned char const& c);

		void clear(void);
		unsigned char readValue(void); //Ei merkkaa ei muutetuksi. changed bitin luku isChanged() muuttaa.
		void writeValue(unsigned char const v, bool const changedAfterClearBit);//Ei merkkaa muuntuneeksi. Operointi merkkaa. Voidaan muutta changedAfterClear bittiä

		bool isChanged(void);
		bool isChangedAfterClear(void){return changedAfterClear_;};

		virtual void saveDataToFileStream(QDataStream& saveFileStream);
		virtual void readDataFromFileStream(QDataStream& readFileStream);

	protected:
		bool changed_;
		bool changedAfterClear_;
		unsigned char memoryValue_;

		void changedToTrue(void);

};

//-------------------------------------------------------------------------------------------------
class externalRAM:public Memory
{
	public:
		externalRAM();
		~externalRAM();
		bool update(void);
		externalRAM& operator=(unsigned char const& c);
		void writeValue(unsigned char const v, bool const changedAfterClearBit);
	private:
		bool upd;
};

//Memory Taulukkoluokka----------------------------------------------------------------------
class MemoryTable
{
	public:
		MemoryTable(void);
		MemoryTable(unsigned long const memorySize);
		virtual ~MemoryTable(void);

		unsigned long readSize(void);
		unsigned char readValue(unsigned int const address);
		virtual void writeValue(unsigned int const address, char const value, bool const changedAfterClearBit);
		virtual void setValue(unsigned int const address, unsigned char const value);
		bool isValueChanged(unsigned int& minChangedAddress, unsigned int& maxChangedAddress);
		bool isValueChanged(unsigned int const address); //Yksittäisen alkion tila vaihtunut

		bool isValueChangedAfterClear(unsigned int& minChangedAddress, unsigned int& maxChangedAddress);
		bool isValueChangedAfterClear(unsigned int const address); //Yksittäisen alkion tila vaihtunut

		void clear(void);

		virtual void saveDataToFileStream(QDataStream& saveFileStream);
		virtual void readDataFromFileStream(QDataStream& readFileStream);

	protected:

		Memory* mTable;
		unsigned long size;

	private:
		bool valueChanged;
		bool valueChangedAfterClear;
		unsigned int minChAddress;
		unsigned int maxChAddress;
		unsigned int minChAddressAfterClear;
		unsigned int maxChAddressAfterClear;
};

class externalDataMemoryTable : public  MemoryTable
{
	public:
		externalDataMemoryTable(unsigned long const memorySize);
		~externalDataMemoryTable(void);
		bool toUpdate(unsigned int& minUpdateAddress, unsigned int& maxUpdateAddress);
		bool toUpdate(unsigned int const address);
		void writeValue(unsigned int const address, char const value, bool const changedAfterClearBit);
		void setValue(unsigned int const address, unsigned char const value);

		void saveDataToFileStream(QDataStream& saveFileStream);
		void readDataFromFileStream(QDataStream& readFileStream);

	private:
		bool toUpd;
		bool* toUpdTable;
		unsigned int minUpdateA;
		unsigned int maxUpdateA;

};

#endif
