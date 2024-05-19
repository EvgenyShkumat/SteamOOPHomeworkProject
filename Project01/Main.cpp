#include <iostream>
#include <string>
#include "SteamUser.h"
#include "Admin.h"
#include "Group.h"
#include "Developer.h"
#include "Operators.h"
using namespace std;

int main() {
	srand(time(NULL));

	SteamUser user1("MrFish", false, 2.07, 7, 451);
	SteamUser user2("adsf", false, 13.89, 2, 451);
	SteamUser user3("fgh", true, 1.02, 10, 1141);
	SteamUser user4("xzcv", false, 9.25, 2, 451);
	SteamUser user5("hgj", false, 5.05, 5, 251);
	
	Group group1;
	group1.add(user1);
	group1.add(user2);
	group1.add(user3);
	Group group2;
	group2.add(user4);
	group2.add(user5);

	cout << "Before: " << user1.getBalance() << endl;
	user1 = user1 + 2.5;
	cout << "After: " << user1.getBalance() << endl;
	user1.getBalance();
	cout << "----------------------------------------" << endl;

	Group group3 = group1 + group2;
	
	cout << group3.getInfo();

	return 0;
}