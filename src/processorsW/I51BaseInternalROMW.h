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
#ifndef I51BASEINTERNALROMW_H
#define I51BASEINTERNALROMW_H

#include "I51BaseW.h"
#include "DisassembleW.h"
#include "AssemblerSourceW.h"

class DisassembleW;
class AssemblerSourceW;
class I51BaseW;

class I51BaseInternalROMW : virtual public I51BaseW
{
	Q_OBJECT
	public:
		I51BaseInternalROMW(QWidget* parent, char const * name, int wflags, int const  index, int const  type);
		~I51BaseInternalROMW();

		bool step(bool const  disassemble, double const  stepTime); //UM
		void powerOnReset(void); //UM
		void showPointerPC(void);//UM

		void loadFilesAndCreateWindows(const QString& hexFilename);//UM
		QString readEAPinPointingProgramMemoryFilename(void) const; //UM

		void saveDataToFileStream_VirtualPart(QDataStream& saveFileStream);
		void readDataFromFileStream_VirtualPart(QDataStream& readFileStream);

	protected:
		void updateProgramMemoryWindows(void); //UM
		void updateProcessorWindows_VirtualPart(void); //UM
		void createDynamicWindows_VirtualPart(void); //UM

		void copy_VirtualPart(I51BaseW* sourceProcessorW);//UM

		bool isAtBreakpoint_VirtualPart(void);//UM
		void showBreakpoint_VirtualPart(void); //UM

		void setCaptionAndIconToProgramMemoryWs(KPixmap const &icon);//UM

		void messageFromWorkspaceW_SetExecutionPoint_VirtualPart(const QString& name, const unsigned long address);//UM
		void messageFromWorkspaceW_ToggleBreakpointBit_VirtualPart(const QString& name, int const  bitAddress, bool const bitValue);
		void messageFromWorkspaceW_FocusProgramMemoryAddress_VirtualPart(const QString& name, const unsigned long address);//UM

		RomW* i_romw_;

	private:
		QString internalProgramMemoryHexFilename_;

		DisassembleW* i_disassemblew_;   //Internal
		AssemblerSourceW* i_assemblersourcew_;      //Internal

		bool isProgramCounterPointingInternalProgramMemory(void);

		#define WINDOWNAME_INTERNAL_DISASSEMBLE "internalDisassembleW"
		#define WINDOWNAME_INTERNAL_ASM_SOURCE "internalASMSourceW"
		#define WINDOWNAME_INTERNAL_ROM "internalROMW"
};

#endif
