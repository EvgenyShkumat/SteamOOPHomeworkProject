#include <iostream>
#include <string>
#include "SteamUser.h"
#include "Admin.h"
using namespace std;


int main() {
	srand(time(NULL));

	SteamUser* user2 = new SteamUser("MrFish", 1.52, true, 5, 102);
	Admin admin;
	
	cout << user2->getInfo() << endl;

	cout << "All baned accounts: " << admin.findAllBannedAccounts(user2, 1);

	return 0;
}