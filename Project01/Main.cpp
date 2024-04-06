#include <iostream>
#include <string>
#include "SteamUser.h"
using namespace std;


int main() {
	srand(time(NULL));

	SteamUser user1{};
	SteamUser user2("MrFish", 10.52, false, 5, 102);

	cout << user1.getInfo() << endl;
	cout << "---------------------------\n";
	cout << user2.getInfo() << endl;

	return 0;
}