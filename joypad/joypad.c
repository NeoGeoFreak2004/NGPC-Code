#include "ngpc.h"		// required
#include "carthdr.h"	// required
#include "library.h"	// NGPC routines
#include <stdlib.h>		// std C routines
#include <stdio.h>



void main()
{
	InitNGPC();
    SysSetSystemFont();
	ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);
	SetBackgroundColour(RGB(0, 0, 0));
	SetPalette(SCR_1_PLANE, 0, 0, 0, 0, RGB(15,15,15));
	
	while(1)
	{
		PrintDecimal(SCR_1_PLANE, 0, 4, 9, JOYPAD, 8);
	}
}