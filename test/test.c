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
	
	SetPalette(SCR_1_PLANE, 0, 0, 0, 0, RGB(0, 15, 0));
	SetPalette(SCR_2_PLANE, 0, 0, 0, 0, RGB(0, 0,15));
	PrintString(SCR_1_PLANE, 0, 2, 8, "Hello, World!");
	PrintString(SCR_1_PLANE, 0, 2, 9, "From Anthony!");
	
	while(1);
}