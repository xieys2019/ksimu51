/***************************************************************************
 *   Copyright (C) 2008 by Heikki Pulkkinen   *
 *   heikki@localhost   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#include "TimersCounters2.h"

TimersCounters2::TimersCounters2(InternalRAM* const pToTL0, InternalRAM* const pToTH0, InternalRAM* const pToTL1, InternalRAM* const pToTH1, InternalRAM* const pToTMOD, InternalRAM* const pToTCON, InternalRAM* const pToIE, InternalRAM* const pToIOPort, InternalRAM* const pToTL2, InternalRAM* const pToTH2, InternalRAM* const pToRCAP2L, InternalRAM* const pToRCAP2H, InternalRAM* const pToT2CON, InternalRAM* const pToT2IOPort) : TimersCounters(pToTL0, pToTH0, pToTL1, pToTH1, pToTMOD, pToTCON, pToIE, pToIOPort)
{
	pToTL2_=pToTL2;
	pToTH2_=pToTH2;
	pToRCAP2L_=pToRCAP2L;
	pToRCAP2H_=pToRCAP2H;
	pToT2CON_=pToT2CON;
	pToT2IOPort_=pToT2IOPort;
	timer2ClockTicksCounter_=0;
	timer2ClockDivider_=12; //Tässä jakajan arvo kiinteä. Perivä luokka voi muuttaa.
	timer2ClockDividerBaudRateGen_=2;//Sama juttu
}

TimersCounters2::~TimersCounters2()
{
}

void TimersCounters2::reset(void)
{
	TimersCounters::reset();
	timer2Overflow_=false;
	timer2ClockTicksCounter_=0;
	lastTx2pin_=true;
	lastTx2Expin_=true;
	clockTicksLastValue_=0;

}

void TimersCounters2::step(I8032_NameS::clockTicks_Type const clockTicks)
{
	using namespace I8032_NameS;
	TimersCounters::step(clockTicks);
	
	//Timer2: 16 bit
	timer2Overflow_=false;      //Nollataan ylivuodot joka kierolla
	bool captureReload=false;
	
	unsigned char timer2PortValue=pToT2IOPort_->readValue();
	bool intTF2Enabled=pToIE_->readValue()&IE_ET2;
	bool baudRateGen=(pToT2CON_->readValue()&T2CON_RCLK)|(pToT2CON_->readValue()&T2CON_TCLK);
	
	if((pToT2CON_->readValue()&T2CON_EXEN2) && (lastTx2Expin_ && !(timer2PortValue&P1_T2EX)))
	{
		if(!baudRateGen)
			captureReload=true;
		if(intTF2Enabled)
			*pToT2CON_|=T2CON_EXF2;
	}
	
	if(baudRateGen)
		intTF2Enabled=false;
	
	if(pToT2CON_->readValue()&T2CON_TR2)
	{
		if(pToT2CON_->readValue()&T2CON_CT2)      //Jos counter
		{
			if(lastTx2pin_ && !(timer2PortValue&P1_T2)) //Jos laskeva reuna
				timer2Overflow_=countM1_16Bit(pToTL2_, pToTH2_, pToT2CON_, T2CON_TF2, intTF2Enabled);
		}
		else      //Jos Timer
		{
			//Lisätään clockTicks counteria
			timer2ClockTicksCounter_+=clockTicks-clockTicksLastValue_;
			//Baud Rate genis niin ajastus osk/2
			int countsAddTimes=0;
			if(baudRateGen)
			{
				countsAddTimes=timer2ClockTicksCounter_/timer2ClockDividerBaudRateGen_;
				timer2ClockTicksCounter_-=countsAddTimes*timer2ClockDividerBaudRateGen_;
			}
			else //Timer Osk/12
			{
				countsAddTimes=timer2ClockTicksCounter_/timer2ClockDivider_;
				timer2ClockTicksCounter_-=countsAddTimes*timer2ClockDivider_;
			}
			for(int n=0; n<countsAddTimes ;n++)
				timer2Overflow_=countM1_16Bit(pToTL2_, pToTH2_, pToT2CON_, T2CON_TF2, intTF2Enabled);
		}
		//Auto Reload tai Baud rate genis
		if(baudRateGen || !(pToT2CON_->readValue()&T2CON_CPRL2))
		{
			if((timer2Overflow_||captureReload))
			{
				*pToTL2_=pToRCAP2L_->readValue();
				*pToTH2_=pToRCAP2H_->readValue();
			}
		}
		else//Capture
		{
			if(captureReload)
			{
				*pToRCAP2L_=pToTL2_->readValue();
				*pToRCAP2H_=pToTH2_->readValue();
			}
		}
	}
		
	lastTx2pin_=timer2PortValue&P1_T2;
	lastTx2Expin_=timer2PortValue&P1_T2EX;

	clockTicksLastValue_=clockTicks;
}


//Tietojen tallennus. Ei ANSI mukainen vaan QT
//Pitää määritellä perivissä, jos tallenetaan niiden ominaisuuksien tiloja, mutta kutsuttava myös tätä.
void TimersCounters2::saveDataToFileStream(QDataStream& saveFileStream)
{
	TimersCounters::saveDataToFileStream(saveFileStream);

	saveFileStream<<(Q_UINT8)timer2Overflow_;
	saveFileStream<<(Q_UINT32)timer2ClockTicksCounter_;
	saveFileStream<<(Q_UINT32)timer2ClockDivider_;
	saveFileStream<<(Q_UINT32)timer2ClockDividerBaudRateGen_;
	saveFileStream<<(Q_UINT8)lastTx2pin_;
	saveFileStream<<(Q_UINT8)lastTx2Expin_;
	saveFileStream<<(Q_UINT32)clockTicksLastValue_;
}

void TimersCounters2::readDataFromFileStream(QDataStream& readFileStream)
{
	TimersCounters::readDataFromFileStream(readFileStream);
	
	Q_UINT8 value8;
	Q_UINT32 value32;
	readFileStream>>value8; timer2Overflow_=(bool)value8;
	readFileStream>>value32; timer2ClockTicksCounter_=value32;
	readFileStream>>value32; timer2ClockDivider_=value32;
	readFileStream>>value32; timer2ClockDividerBaudRateGen_=value32;
	readFileStream>>value8; lastTx2pin_=(bool)value8;
	readFileStream>>value8; lastTx2Expin_=(bool)value8;
	readFileStream>>value32; clockTicksLastValue_=value32;
}
