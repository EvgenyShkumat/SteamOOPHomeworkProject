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
		bool is_banned2 = false, int level2 = 0, int hour2 = 0);

	string getInfo();
	void replenish(double amount);

	~SteamUser();

	string getName();
	void setName(string thisName);

	double getBalance();

	bool getIs_banned();

	bool getLevel();
	void setLevel(int thisLevel);

	int getHour();
	void setHour(int thisHour);
}; 
