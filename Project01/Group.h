#pragma once
#include "SteamUser.h"

class Group
{
private:
	int size;
	SteamUser* list;
public:

	SteamUser get(int index);
	bool set(SteamUser user, int index);
	void add(SteamUser user);
	void remove(int index);
	void remove(SteamUser user);
	int getFirstIndex(SteamUser user);

	Group(int size = 0);

	string getInfo();

	int getSize();
};

