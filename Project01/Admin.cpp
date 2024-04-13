#include "Admin.h"

double Admin::findRichestBalance(SteamUser* accounts, int length) {
	double max_balance = accounts[0].getBalance();

	for (int i = 1; i < length; i++)
	{
		if (accounts[i].getBalance() > max_balance) {
			max_balance = accounts[i].getBalance();
		}
	}

	return max_balance;
}

SteamUser Admin::findRichestAccount(SteamUser* accounts, int length) {
	double balance = findRichestBalance(accounts, length);
	SteamUser user;

	for (int i = 0; i < length; i++)
	{
		if (accounts[i].getBalance() == balance) {
			user = accounts[i];
			break;
		}
	}

	return user;
}

string Admin::findAllBannedAccounts(SteamUser* accounts, int length) {
	string msg = "";

	for (int i = 0; i < length; i++)
	{
		if (accounts[i].getIs_banned()) {
			msg += accounts[i].getName() + " ";
		}
	}

	return msg;
}