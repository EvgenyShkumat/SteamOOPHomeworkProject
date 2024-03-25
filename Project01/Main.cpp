#include <iostream>
using namespace std;

class SteamUser {
public:
	string name;
	double balance;
	bool is_banned;
	int level;
	int hour;
};

int main() {
	SteamUser user1;

	user1.name = "MrFly";
	user1.balance = 17.23;
	user1.is_banned = false;
	user1.level = 10;
	user1.hour = 561;

	return 0;
}