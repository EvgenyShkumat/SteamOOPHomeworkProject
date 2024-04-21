#pragma once
#include "SteamUser.h"

class Admin {
public:
	static double findRichestBalance(SteamUser* accounts, int length);
	static SteamUser findRichestAccount(SteamUser* accounts, int length);
	static string findAllBannedAccounts(SteamUser* accounts, int length);
};
