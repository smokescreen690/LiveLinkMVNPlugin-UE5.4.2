// Copyright 2018 Movella Technologies B.V., Inc. All Rights Reserved.

#ifndef PARSERMANAGER_H
#define PARSERMANAGER_H

#include "Datagram.h"

class ParserManager
{
public:
//	const bool UseGlobalSource = true;
	
	ParserManager();
	~ParserManager();
	Datagram* readDatagram(const TArray<uint8_t>& data);

private:
	Datagram* createDgram(StreamingProtocol proto);
};

#endif
