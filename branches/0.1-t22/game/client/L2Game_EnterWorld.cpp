#include "stdafx.h"
#include "L2Game_EnterWorld.h"

/*
Client: Len  107
6B 00
11
00 00 00 00  00 00 00 00  00 00 00 00  00 00 00 00
C9 BC F2 A7  66 5A 0B 98  36 A5 BD 89  ED 7F E4 D7
6B 49 E2 9F  EF 76 EB CE  A3 FA F4 BF  0C 64 A3 B4
A4 CE DC C6  08 3E 6E EA  45 CA D3 FE  88 13 87 B8
06 2C 96 F0  9B 1E 8E BC  C6 9B 98 C8  63 16 CF D0
29 00 00 00  0A E1 74 17  0A 08 00 08  5C 32 BD E1
5C 32 BE 22  5E 19 03 41

last 2 D's are different, depend on char

unsigned char array = {
0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xC9, 0xBC, 0xF2, 0xA7,  0x66, 0x5A, 0x0B, 0x98, 0x36, 0xA5, 0xBD, 0x89, 0xED, 0x7F, 0xE4, 0xD7, 
0x6B, 0x49, 0xE2, 0x9F,  0xEF, 0x76, 0xEB, 0xCE, 0xA3, 0xFA, 0xF4, 0xBF, 0x0C, 0x64, 0xA3, 0xB4, 
0xA4, 0xCE, 0xDC, 0xC6,  0x08, 0x3E, 0x6E, 0xEA, 0x45, 0xCA, 0xD3, 0xFE, 0x88, 0x13, 0x87, 0xB8, 
0x06, 0x2C, 0x96, 0xF0,  0x9B, 0x1E, 0x8E, 0xBC, 0xC6, 0x9B, 0x98, 0xC8, 0x63, 0x16, 0xCF, 0xD0, 
0x29, 0x00, 0x00, 0x00,  0x0A, 0xE1, 0x74, 0x17, 0x0A, 0x08, 0x00, 0x08, 0x5C, 0x32, 0xBD, 0xE1, 
0x5C, 0x32, 0xBE, 0x22,  0x5E, 0x19, 0x03, 0x41, };
*/

L2Game_EnterWorld::L2Game_EnterWorld()
{
	_initNull();
}

L2Game_EnterWorld::L2Game_EnterWorld( const unsigned char *bytes, unsigned int length )
{
	_initNull();
	setBytes( bytes, length );
}

bool L2Game_EnterWorld::create()
{
	unsigned char ew_array[] = {
		0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0xC9, 0xBC, 0xF2, 0xA7,  0x66, 0x5A, 0x0B, 0x98, 0x36, 0xA5, 0xBD, 0x89, 0xED, 0x7F, 0xE4, 0xD7, 
		0x6B, 0x49, 0xE2, 0x9F,  0xEF, 0x76, 0xEB, 0xCE, 0xA3, 0xFA, 0xF4, 0xBF, 0x0C, 0x64, 0xA3, 0xB4, 
		0xA4, 0xCE, 0xDC, 0xC6,  0x08, 0x3E, 0x6E, 0xEA, 0x45, 0xCA, 0xD3, 0xFE, 0x88, 0x13, 0x87, 0xB8, 
		0x06, 0x2C, 0x96, 0xF0,  0x9B, 0x1E, 0x8E, 0xBC, 0xC6, 0x9B, 0x98, 0xC8, 0x63, 0x16, 0xCF, 0xD0, 
		0x29, 0x00, 0x00, 0x00,  0x0A, 0xE1, 0x74, 0x17, 0x0A, 0x08, 0x00, 0x08, 0x5C, 0x32, 0xBD, 0xE1, 
		0x5C, 0x32, 0xBE, 0x22,  0x5E, 0x19, 0x03, 0x41 };
	this->writeReset();
	this->writeUChar( 0x11 ); // EnterWorld
	this->writeBytes( ew_array, sizeof(ew_array) );
	return true;
}