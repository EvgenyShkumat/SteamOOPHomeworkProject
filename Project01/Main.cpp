#include <iostream>
#include <string>
#include "SteamUser.h"
#include "Admin.h"
#include "Server.h"
using namespace std;

int main() {
	srand(time(NULL));

	SteamUser user1("MrFish", 0.01, false, 5, 451);
	SteamUser user2("phoenix", 0.28, false, 7, 102);
	SteamUser user3("adsfakl", 1.52, true, 2, 56);
	SteamUser user4("sonnik", 14.91, false, 10, 2802);

	Server server1{};

	server1.add(user1);
	server1.add(user2);
	server1.add(user3);
	server1.add(user4);

	cout << "The size of the server is: " << server1.getSize() << endl;
	cout << "--------------------------------\n";
	cout << server1.getInfo();

	return 0;
}