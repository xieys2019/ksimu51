/***************************************************************************
*   Copyright (C) 2005 by Heikki Pulkkinen   *
*   heikki@CompaQ7113EA   *
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
#include "RegsW.h"
#include "I51BaseW.h"

#include <string>

RegsW::RegsW( QWidget* parent, char const * name, int wflags )
	: ShareMainW( parent, name, wflags )
{
	connect(this,SIGNAL(message_MemoryValueChanged(const QString&, const unsigned long, const int )), this->parent()->parent()->parent(), SLOT(messageFromWorkspaceW_MemoryValueChanged(const QString&, const unsigned long, const int)));

	registerTable_ = new NumQTable(this,"registerTable_", FONTFAMILY, 10);
	setCentralWidget(registerTable_);

	registerTable_->addColumn(ColumnBase::HEX, 2);
	registerTable_->addColumn(ColumnBase::BIN, 8);
	registerTable_->addColumn(ColumnBase::DEC ,3);
	
	setGeometry(0, 0, regsTableGeometrySize().width(), regsTableGeometrySize().height());

	connect(registerTable_, SIGNAL(numTableValueChanged(int, int)), this, SLOT(registerTableValueChanged( int, int)));
}

RegsW::~RegsW()
{
}

void RegsW::removeAllRows(void)
{
	while(registerTable_->numRows())
		registerTable_->removeRow(registerTable_->numRows()-1);
}

void RegsW::add(unsigned char const  registerAddress, const QString& registerName)
{
	QString qStr,apuQStr;
	//RegName
	if(registerAddress)
	{
		qStr="[";
		qStr+=apuQStr.setNum(registerAddress,16);
		qStr+="]";
	}
	else
		qStr="";
	qStr+=registerName;
	registerTable_->addRow(qStr.upper());
}


void RegsW::setValue(int const  row, unsigned char const  registerValue)
{
	registerTable_->setValue(row, registerValue);
}

QSize RegsW::regsTableGeometrySize(void)
{
	int n;
	int height=registerTable_->horizontalHeader()-> frameGeometry().height();
	for(n=0;n<registerTable_->numRows();n++)
		height+=registerTable_->rowHeight(n);
	int width=registerTable_->verticalHeader()-> frameGeometry().width();
	for(n=0;n<registerTable_->numCols();n++)
		width+=registerTable_->columnWidth(n);
	return QSize(width,height);
}

void RegsW::registerTableValueChanged(int row, int col )
{
	//Ekaksi osoite.
	QString messageStr(registerTable_->verticalHeader()->label(row));
	QString valQStr;
	valQStr=QChar(messageStr[1]);
	valQStr+=QChar(messageStr[2]);
	bool ok;
	int luku;
	unsigned int messageValue=valQStr.toUInt (&ok , 16);
	//Arvo
	messageStr=registerTable_->text(row,col);
	if(col==0)//Heksa
		luku=messageStr.toUInt(&ok,16);
	if(col==1)//Bin
		luku=messageStr.toUInt(&ok,2);
	if(col==2)//Dec
		luku=messageStr.toUInt(&ok,10);
	if(ok&&(luku<256))
	{
		valQStr=messageStr.setNum(luku,16);
		if(valQStr.length()==1)
			valQStr.prepend("0");
		emit message_MemoryValueChanged(this->name(), messageValue, luku);
	}
}

QSize RegsW::getMaximumSize(void)
{
	return QSize(regsTableGeometrySize().width()+I51BaseW::WIDTH_TO_ADD_WINDOW_GEOMETRY, regsTableGeometrySize().height()+I51BaseW::HEIGHT_TO_ADD_WINDOW_GEOMETRY);

}

