#include <iostream>
#include <string>
#include "SteamUser.h"
#include "Admin.h"
#include "Group.h"
#include "Developer.h"
using namespace std;

int main() {
	srand(time(NULL));

	SteamUser user1("MrFish", false, 0.05, 5, 451);
	Developer developer("Kojima Productions", false, "Japan");

	cout << user1.getInfo();
	cout << developer.getInfo();

	return 0;
}