#include "SteamUser.h"

SteamUser::SteamUser(string name2, double balance2 , bool is_banned2 , int level2 , int hour2 ) {
	name = name2;
	balance = balance2;
	is_banned = is_banned2;
	level = level2;
	hour = hour2;
}

string SteamUser::getInfo() {
	return "Name: " + name + "\nBalance: " + to_string(balance) +
		"\nSteam account level: " + to_string(level) + "\nTotal hours spent: " +
		to_string(hour) + " hours\nIs banned: " + (is_banned ? "Yes" : "No");
}

void SteamUser::replenish(double amount) {
	balance += amount;
}

SteamUser::~SteamUser() { }

string SteamUser::getName() { return name; }
void SteamUser::setName(string thisName) { name = thisName; }

double SteamUser::getBalance() { return balance; }

bool SteamUser::getIs_banned() { return is_banned; }

bool SteamUser::getLevel() { return level; }
void SteamUser::setLevel(int thisLevel) { level = thisLevel; }

int SteamUser::getHour() { return hour; }
void SteamUser::setHour(int thisHour) { hour = thisHour; }