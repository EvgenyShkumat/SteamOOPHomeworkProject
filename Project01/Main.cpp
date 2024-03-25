#include <iostream>
#include <string>
using namespace std;

class SteamUser {
public:
	string name;
	double balance;
	bool is_banned;
	int level;
	int hour;

	string getInfo() {
		return "Name: " + name + "\nBalance: " + to_string(balance) +
			"\nSteam account level: " + to_string(level) + "\nTotal hours spent: " +
			to_string(hour) + " hours\nIs banned: " + (is_banned ? "Yes" : "No");
	}

	void replenish(double amount) {
		balance += amount;
	}
};

int main() {
	SteamUser user1;

	user1.name = "MrFly";
	user1.balance = 17.23;
	user1.is_banned = false;
	user1.level = 10;
	user1.hour = 561;

	cout << user1.getInfo() << endl;
	user1.replenish(5.71);
	cout << user1.getInfo();

	return 0;
}