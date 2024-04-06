#pragma once
#include "SteamUser.h"

class Admin {
public:
	double find_richest_balance(SteamUser* accounts, int length) {
		double max_balance = accounts[0].balance;

		for (int i = 1; i < length; i++)
		{
			if (accounts[i].balance > max_balance) {
				max_balance = accounts[i].balance;
			}
		}

		return max_balance;
	}

	SteamUser findRichestAccount(SteamUser* accounts, int length) {
		double balance = find_richest_balance(accounts, length);
		SteamUser user;

		for (int i = 0; i < length; i++)
		{
			if (accounts[i].balance == balance) {
				user = accounts[i];
				break;
			}
		}

		return user;
	}

	string find_all_banned_accounts(SteamUser* accounts, int length) {
		string msg = "";

		for (int i = 0; i < length; i++)
		{
			if (accounts[i].is_banned) {
				msg += accounts[i].name + " ";
			}
		}

		return msg;
	}
};
