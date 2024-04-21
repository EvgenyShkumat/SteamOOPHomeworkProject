#pragma once
#include "SteamUser.h"

class Server
{
private:
	static const int DEFAULT_SIZE = 255;
	SteamUser list[DEFAULT_SIZE];
	int size;
public:
	bool add(SteamUser user);
	SteamUser get(int index);
	bool set(SteamUser user, int index);

	Server(int size = 0);

	string getInfo();

	int getSize();
};

