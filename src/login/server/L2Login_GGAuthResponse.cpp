#include "stdafx.h"
#include "L2Login_GGAuthResponse.h"

/*  // L2J
	protected void write()
	{
		writeC(0x0b); // packet code
        writeD(_response);
        writeD(0x00);
        writeD(0x00);
        writeD(0x00);
        writeD(0x00);
	}*/

L2Login_GGAuthResponse::L2Login_GGAuthResponse()
{
	this->_initNull();
}

L2Login_GGAuthResponse::L2Login_GGAuthResponse( const unsigned char *bytes, unsigned int length )
{
	this->_initNull();
	this->setBytes( bytes, length );
}

unsigned int L2Login_GGAuthResponse::read_Response()
{
	if( !this->canReadBytes(21) ) return 0;
	this->readReset();
	this->getPacketType();
	return this->readUInt();
}
