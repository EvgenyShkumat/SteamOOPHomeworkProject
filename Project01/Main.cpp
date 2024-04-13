#include <iostream>
#include <string>
#include "SteamUser.h"
#include "Admin.h"
using namespace std;


int main() {
	srand(time(NULL));

	SteamUser user1{};
	SteamUser user2("MrFish", 1.52, true, 5, 102);
	SteamUser user3("phoenix", 2.07, true, 2, 28);
	SteamUser user4("mkjais", 20.87, false, 10, 1723);

	Admin admin;

	const int size = 4;
	SteamUser accounts[size]{user1, user2, user3, user4};
	
	cout << "All banned accounts: " << admin.findAllBannedAccounts(accounts, size) << endl;
	cout << "The richest accoutn is: " << admin.findRichestAccount(accounts, size).getName() << endl;

	return 0;
}