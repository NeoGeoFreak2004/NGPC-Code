#include "ngpc.h"		// required
#include "carthdr.h"	// required
#include "library.h"	// NGPC routines
#include <stdlib.h>		// std C routines
#include <stdio.h>
#include "alien.c"

void main()
{
	u8 iSprite;
	u8 iXpos;
	u8 iYpos;
	
	InitNGPC();
	
    ClearScreen(SCR_1_PLANE);
	ClearScreen(SCR_2_PLANE);

	SetBackgroundColour(RGB(0,0,0));

    InstallTileSetAt(alien, sizeof(alien)/2, 128);
	
	
	iSprite=0;
	iXpos=50;
	iYpos=50;
	
	SetSprite(iSprite, 128 + alien, 0, iXpos, iYpos, 0);
	
	while(1);