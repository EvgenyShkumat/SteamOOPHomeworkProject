#include <iostream>
#include <string>
#include "SteamUser.h"
#include "Admin.h"
#include "Group.h"
using namespace std;

int main() {
	srand(time(NULL));

	SteamUser user1("MrFish", 0.01, false, 5, 451);
	SteamUser user2("phoenix", 0.28, false, 7, 102);
	SteamUser user3("adsfakl", 1.52, true, 2, 56);
	SteamUser user4("sonic", 14.91, false, 10, 2802);

	Group group1{};

	group1.add(user1);
	group1.add(user2);
	group1.add(user3);
	group1.add(user4);

	cout << "The size of the server is: " << group1.getSize() << endl;
	cout << "--------------------------------\n";
	cout << group1.getInfo();

	return 0;
}