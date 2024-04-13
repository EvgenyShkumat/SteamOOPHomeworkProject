#pragma once
#include "SteamUser.h"

class Admin {
public:
	double findRichestBalance(SteamUser* accounts, int length);
	SteamUser findRichestAccount(SteamUser* accounts, int length);
	string findAllBannedAccounts(SteamUser* accounts, int length);
};
