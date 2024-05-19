#include "SteamUser.h"

SteamUser::SteamUser(string name, bool is_banned, double balance, int level,
	int hour) : User(name, is_banned) {
	this->balance = balance;
	this->level = level;
	this->hour = hour;
}

string SteamUser::getInfo() {
	return "Name: " + name + "\nBalance: " + to_string(balance) +
		"\nSteam account level: " + to_string(level) + "\nTotal hours spent: " +
		to_string(hour) + " hours\nIs banned: " + (is_banned ? "Yes" : "No") + "\n";
}

void SteamUser::replenish(double amount) {
	balance += amount;
}

SteamUser::~SteamUser() { }

double SteamUser::getBalance() { return balance; }

bool SteamUser::getLevel() { return level; }
void SteamUser::setLevel(int Level) { this->level = level; }

int SteamUser::getHour() { return hour; }
void SteamUser::setHour(int hour) { this->hour = hour; }