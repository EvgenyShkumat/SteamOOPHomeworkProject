#pragma once
#include <iostream>
#include <string>
#include "User.h"
using namespace std;

class SteamUser : public User {
private:
	double balance;
	int level;
	int hour;
public:
	SteamUser(string name = "no name", bool is_banned = false, 
		double balance = 0, int level = 0, int hour = 0);

	string getInfo();
	void replenish(double amount);

	~SteamUser();

	double getBalance();

	bool getLevel();
	void setLevel(int thisLevel);

	int getHour();
	void setHour(int thisHour);
}; 
