#include <iostream>
#include <string>
#include "SteamUser.h"
using namespace std;


int main() {
	srand(time(NULL));

	SteamUser user1{};

	cout << user1.getInfo() << endl;

	cout << "---------------------------\n";
	user1.replenish(5.71);
	cout << user1.getInfo();

	return 0;
}