#pragma once
#include <iostream>
#include <string>
using namespace std;

class SteamUser {
private:
	string name;
	double balance;
	bool is_banned;
	int level;
	int hour;
public:

	SteamUser(string name2 = ("user_" + to_string(rand() % 10000)), double balance2 = 0,
		bool is_banned2 = false, int level2 = 0, int hour2 = 0) {
		name = name2;
		balance = balance2;
		is_banned = is_banned2;
		level = level2;
		hour = hour2;
	}

	string getInfo() {
		return "Name: " + name + "\nBalance: " + to_string(balance) +
			"\nSteam account level: " + to_string(level) + "\nTotal hours spent: " +
			to_string(hour) + " hours\nIs banned: " + (is_banned ? "Yes" : "No");
	}

	void replenish(double amount) {
		balance += amount;
	}

	~SteamUser() { }

	string getName() { return name; }
	void setName(string thisName) { name = thisName; }

	double getBalance() { return balance; }

	bool getIs_banned() { return is_banned; }

	bool getLevel() { return level; }
	void setLevel(int thisLevel) { level = thisLevel; }

	int getHour() { return hour; }
	void setHour(int thisHour) { hour = thisHour; }
}; 
