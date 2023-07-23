#include "ngpc.h"		// required
#include "carthdr.h"	// required
#include "library.h"	// NGPC routines
#include <stdlib.h>		// std C routines
#include <stdio.h>


void main()
{
	u8 iSprite;
	u8 iXpos;
	u8 iYpos;
	
	InitNGPC();
	SysSetSystemFont();
	
	ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);
	SetBackgroundColour(RGB(0, 0, 0));
    SetPalette(SCR_1_PLANE, 0, RGB(0,0,15), RGB(0,0,15), RGB(15,15,15), RGB(15,0,0));
    SetPalette(SCR_2_PLANE, 0, 0, 0, 0, RGB(0,15,0));
    SetPalette(SPRITE_PLANE, 0, 0, RGB(15,0,0), RGB(0,0,15), RGB(0,15,0));
    PrintString(SCR_1_PLANE, 0, 2, 7, "Feels like");
    PrintString(SCR_2_PLANE, 0, 2, 9, "Starting over!");
    PrintString(SCR_1_PLANE, 0, 0, 0, "--------------");
    PrintString(SCR_2_PLANE, 0, 0, 0, "()()()()()()()");
 
    iSprite=0;
	iXpos=50;
	iYpos=50;
	
	SetSprite(iSprite, 88, 0, iXpos, iYpos, 0);
	
	while(1) {
		iXpos++;
		SetSpritePosition(iSprite, iXpos, iYpos);
		Sleep(1);
	}
}