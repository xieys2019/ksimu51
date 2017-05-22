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
#include "Gal22V10W.h"

Gal22V10W::Gal22V10W(QWidget* parent, char const * name, int wflags, unsigned int const  componentNumber, unsigned int const  componentType) : ExternalComponentW(parent, name, wflags, componentNumber, componentType)
{
	componentName_.setNum(componentNumber,10);
	componentName_+=" GAL22V10";

	delayTimeTyp_=DELAYTIMEGAL22V10;
	delayTimeTypNumInput_->setValue(delayTimeTyp_*1.0e9);

	addInputPin(PINNAME_IN1);
	addInputPin(PINNAME_IN2);
	addInputPin(PINNAME_IN3);
	addInputPin(PINNAME_IN4);
	addInputPin(PINNAME_IN5);
	addInputPin(PINNAME_IN6);
	addInputPin(PINNAME_IN7);
	addInputPin(PINNAME_IN8);
	addInputPin(PINNAME_IN9);
	addInputPin(PINNAME_IN10);
	addInputPin(PINNAME_IN11);
	addInputPin(PINNAME_IN12);

	addBidirPinInRightKToolBar(PINNAME_IO1);
	addBidirPinInRightKToolBar(PINNAME_IO2);
	addBidirPinInRightKToolBar(PINNAME_IO3);
	addBidirPinInRightKToolBar(PINNAME_IO4);
	addBidirPinInRightKToolBar(PINNAME_IO5);
	addBidirPinInRightKToolBar(PINNAME_IO6);
	addBidirPinInRightKToolBar(PINNAME_IO7);
	addBidirPinInRightKToolBar(PINNAME_IO8);
	addBidirPinInRightKToolBar(PINNAME_IO9);
	addBidirPinInRightKToolBar(PINNAME_IO10);

	maxWSize_=QSize(inputPinKListBox_->maxItemWidth()+bidirPinKListBoxInRightKToolBar_->maxItemWidth()+30, inputPinKListBox_->itemHeight(0)*inputPinKListBox_->numRows()+34);
	setMinimumSize(QSize(maxWSize_-QSize(10,20)));

	resize(maxWSize_);
}

Gal22V10W::~Gal22V10W()
{
}


void Gal22V10W::update_VirtualPart(void)
{
}

double Gal22V10W::execute_VirtualPart(double executeTime)
{
	return execute_VirtualPart_ExecuteInputChange(executeTime); //Käytetään yleisohjelmaa kantaluokasta
}

void Gal22V10W::execute_VirtualPart_ExecuteInputChange_ExecutionReady_VirtualPart(void)
{
}

void Gal22V10W::saveComponentWorkDataInFileStream(QDataStream& saveFileStream)
{
	ExternalComponentW::saveComponentWorkDataInFileStream(saveFileStream);
}

void Gal22V10W::readComponentWorkDataFromFileStream(QDataStream& readFileStream)
{
	ExternalComponentW::readComponentWorkDataFromFileStream(readFileStream);
}

