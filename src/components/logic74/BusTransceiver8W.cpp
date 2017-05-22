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
#include "BusTransceiver8W.h"

BusTransceiver8W::BusTransceiver8W(QWidget* parent, char const * name, int wflags, unsigned int const  componentNumber, unsigned int const  componentType) : Logic74BaseW(parent, name, wflags, componentNumber, componentType)
{
	componentName_+=" Octal Bus Transceiver";
	delayTimeTyp_=DELAYTIME;

	loadComponentXPMImage();
	componentImageQLabel_->setPixmap(componentImage_);

	//Input pins
	addInputPin(PINNAME_G);
	addInputPin(PINNAME_DIR);
	addBidirPinInLeftKToolBar(PINNAME_A1);
	addBidirPinInLeftKToolBar(PINNAME_A2);
	addBidirPinInLeftKToolBar(PINNAME_A3);
	addBidirPinInLeftKToolBar(PINNAME_A4);
	addBidirPinInLeftKToolBar(PINNAME_A5);
	addBidirPinInLeftKToolBar(PINNAME_A6);
	addBidirPinInLeftKToolBar(PINNAME_A7);
	addBidirPinInLeftKToolBar(PINNAME_A8);
	addBidirPinInRightKToolBar(PINNAME_B1);
	addBidirPinInRightKToolBar(PINNAME_B2);
	addBidirPinInRightKToolBar(PINNAME_B3);
	addBidirPinInRightKToolBar(PINNAME_B4);
	addBidirPinInRightKToolBar(PINNAME_B5);
	addBidirPinInRightKToolBar(PINNAME_B6);
	addBidirPinInRightKToolBar(PINNAME_B7);
	addBidirPinInRightKToolBar(PINNAME_B8);

	pToGPin_=ioList_.pToPin(PINNAME_G);
	pToDIRPin_=ioList_.pToPin(PINNAME_DIR);
	pToA1Pin_=ioList_.pToPin(PINNAME_A1);
	pToB1Pin_=ioList_.pToPin(PINNAME_B1);

	initW(); //
}

BusTransceiver8W::~BusTransceiver8W()
{

}

void BusTransceiver8W::execute_VirtualPart_ExecuteInputChange_ExecutionReady_VirtualPart(void)
{
	IOPin* aP=pToA1Pin_;
	IOPin* bP=pToB1Pin_;
	for(int n=0; n<8; n++)
	{
		bool dir=pToDIRPin_->readValue(true);
		bool hiz=pToGPin_->readValue(true);
		aP->setDirection(!dir);
		bP->setDirection(dir);

		//Isolaatio
		aP->setHizState(hiz);
		bP->setHizState(hiz);

		if(!hiz)
		{
			if(dir)
				bP->writeValue(aP->readValue(true), true);
			else
				aP->writeValue(bP->readValue(true), true);
		}

		aP=aP->next();
		bP=bP->next();
	}
}

void BusTransceiver8W::loadComponentXPMImage(void)
{
	/* XPM */
	static char const * logicXPM[]={
"142 233 2 1",
"# c #a54b4b",
". c #ffffff",
"..............................................................................................................................................",
"........................#################################################################.....................................................",
"........................#...............................................................#.....................................................",
"........................#...............................................................#.....................................................",
"................#.......#...............................................................#.....................................................",
"................###.....#...............................................................#.....................................................",
"................#..##...#.....####..###.................................................#.....................................................",
"................#....##.#....#....#.#..#................................................#.....................................................",
"#########################...#..........#................................................#.....................................................",
"........................#...#...###..##.................................................#.....................................................",
"........................#...#.....#....#................................................#.....................................................",
"........................#....#....#.#..#................................................#.............................####.....###############",
"........................#.....#####.###.................................................#.............................####....##..............",
"........................#...............................................................#.............................####...##...............",
"................#.......#...............................................................#.............................####..##................",
"................###.....#...............................................................#.............................####.##.................",
"................#..##...#....###.....#####.#...#...#......##..####...##..##.............#.............................######..................",
"................#....##.#....#..#....#.....##..#..##......#...#...#..##...#.............#.............................#####...................",
"........#################.......#....#.....##..#...#......#...#...#.#.#...#.............#.............................####....................",
"........#...............#.....##.....#####.#.#.#...#......#...####..#..#..#.............#.............................####....................",
"........#...............#.......#....#.....#.#.#...#......#...#...#.####..#.............#.............................####....................",
"........#...............#....#..#....#.....#..##...#......#...#...#.#..#..#.............#.............................####....................",
"........#...............#....###.....#####.#...#...#......#...####.#....#.#.............#.............................####....................",
"........#...............#.................................#...............#.............#.............................####....................",
"........#...............#.................................##.............##.............#.............................####....................",
"........#...............#...............................................................#.............................####....................",
"........#...............#...............................................................#.............................####....................",
"........#...............#...............................................................#.............................####....................",
"........#...............#....###.....#####.#...#..###.....##...##...####.##.............#.............................####....................",
"........#...............#....#..#....#.....##..#..#..#....#....##...#...#.#.............#.............................####.....###############",
"#########################.......#....#.....##..#.....#....#...#.#...#...#.#.............#.............................####....##..............",
"........................#.....##.....#####.#.#.#....#.....#...#..#..####..#.............#.............................####...##...............",
"........................#.......#....#.....#.#.#...#......#...####..#...#.#.............#.............................####..##................",
"........................#....#..#....#.....#..##..#.......#...#..#..#...#.#.............#.............................####.##.................",
"........................#....###.....#####.#...#..####....#..#....#.####..#.............#.............................######..................",
"........................#.................................#...............#.............#.............................#####...................",
"........................#.................................##.............##.............#.............................####....................",
"........................#########...............................................#########.............................####....................",
"................................#...............................................#.....................................####....................",
"................................#...............................................#.....................................####....................",
"................................#...............................................#....................................#####....................",
"................................#...............................................#...................................######....................",
"........................#################################################################..........................##.####....................",
"........................#...............................................................#.........................##..####....................",
".................##.....#...#######.....#..................#............................#........##..............##...####....................",
"...............####.....#....#....#....##................###............................#......####.............##....####....................",
"#########################....#...#......#..............##..#............................#########################.....####....................",
"........#......####.....#.....#..#......#............##....#............................#......####.....#.............####.....###############",
"........#........##.....#.....#.#.......#.............##...#............................#........##.....#.............####....##..............",
"........#...............#......##.......#...............##.#............................#...............#.............####...##...............",
"........#...............#......#........#.................##............................#...............#.............####..##................",
"........#...............#...............................................................#...............#.............####.##.................",
"........#...............#################################################################...............#.............######..................",
"........#...............#...............................................................#...............#.............#####...................",
"........#...............#............................#.................###....#######...#...............#.............####....................",
"........#...............#............................###...............#..#....#....#...#...............#.............####....................",
"........#################............................#..##................#....#...#....#################.............####....................",
"........................#............................#....##.............#......#..#....#.............................####....................",
"........................#............................#...##.............#.......#.#.....#.............................####....................",
"........................#............................#.##..............#.........##.....#.............................####....................",
"........................#............................##................####......#......#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####.....###############",
"........................#...............................................................#...........................######....##..............",
"........................#...............................................................#..........................##.####...##...............",
".........#...#..........#...............................................................#.........#...#...........##..####..##................",
"........##...##.........#...............................................................#........##...##.........##...####.##.................",
"......####...####.......#...............................................................#......####...####......##....######..................",
"#########################...............................................................#########################.....#####...................",
"......####...####.......#...............................................................#......####...####............####....................",
"........##...##.........#...............................................................#........##...##..............####....................",
".........#...#..........#...............................................................#.........#...#...............####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####.....###############",
"........................#...............................................................#...........................######....##..............",
"........................#...............................................................#..........................##.####...##...............",
".........#...#..........#...............................................................#.........#...#...........##..####..##................",
"........##...##.........#...............................................................#........##...##.........##...####.##.................",
"......####...####.......#...............................................................#......####...####......##....######..................",
"#########################...............................................................#########################.....#####...................",
"......####...####.......#...............................................................#......####...####............####....................",
"........##...##.........#...............................................................#........##...##..............####....................",
".........#...#..........#...............................................................#.........#...#...............####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####.....###############",
"........................#...............................................................#...........................######....##..............",
"........................#...............................................................#..........................##.####...##...............",
".........#...#..........#...............................................................#.........#...#...........##..####..##................",
"........##...##.........#...............................................................#........##...##.........##...####.##.................",
"......####...####.......#...............................................................#......####...####......##....######..................",
"#########################...............................................................#########################.....#####...................",
"......####...####.......#...............................................................#......####...####............####....................",
"........##...##.........#...............................................................#........##...##..............####....................",
".........#...#..........#...............................................................#.........#...#...............####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####.....###############",
"........................#...............................................................#...........................######....##..............",
"........................#...............................................................#..........................##.####...##...............",
"........#...#...........#...............................................................#.........#...#...........##..####..##................",
".......##...##..........#...............................................................#........##...##.........##...####.##.................",
".....####...####........#...............................................................#......####...####......##....######..................",
"#########################...............................................................#########################.....#####...................",
".....####...####........#...............................................................#......####...####............####....................",
".......##...##..........#...............................................................#........##...##..............####....................",
"........#...#...........#...............................................................#.........#...#...............####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####.....###############",
"........................#...............................................................#...........................######....##..............",
"........................#...............................................................#..........................##.####...##...............",
".........#...#..........#...............................................................#.........#...#...........##..####..##................",
"........##...##.........#...............................................................#........##...##.........##...####.##.................",
"......####...####.......#...............................................................#......####...####......##....######..................",
"#########################...............................................................#########################.....#####...................",
"......####...####.......#...............................................................#......####...####............####....................",
"........##...##.........#...............................................................#........##...##..............####....................",
".........#...#..........#...............................................................#.........#...#...............####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####....................",
"........................#...............................................................#...........................######....................",
"........................#...............................................................#..........................##.####....................",
".........#...#..........#...............................................................#.........#...#...........##..####....................",
"........##...##.........#...............................................................#........##...##.........##...####....................",
"......####...####.......#...............................................................#......####...####......##....####....................",
"#########################...............................................................#########################.....####....................",
"......####...####.......#...............................................................#......####...####............####....................",
"........##...##.........#...............................................................#........##...##..............####....................",
".........#...#..........#...............................................................#.........#...#...............####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#################################################################.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#.............................####....................",
"........................#...............................................................#............................#####....................",
"........................#...............................................................#...........................######....................",
"........................#...............................................................#..........................##.####....................",
".........#...#..........#...............................................................#.........#...#...........##..####....................",
"........##...##.........#...............................................................#........##...##.........##...####....................",
"......####...####.......#...............................................................#......####...####......##....####....................",
"#########################...............................................................#########################.....####....................",
"......####...####.......#...............................................................#......####...####....................................",
"........##...##.........#...............................................................#........##...##......................................",
".........#...#..........#...............................................................#.........#...#.......................................",
"........................#...............................................................#.....................................................",
"........................#...............................................................#.....................................................",
"........................#...............................................................#.....................................................",
"........................#...............................................................#.....................................................",
"........................#...............................................................#.....................................................",
"........................#################################################################.....................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
"..............................................................................................................................................",
".............................................................................................................................................."
	};
	componentImage_=QPixmap(logicXPM);
}
