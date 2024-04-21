#include "SteamUser.h"

SteamUser::SteamUser(string name, double balance , bool is_banned , int level , int hour ) {
	this->name = name;
	this->balance = balance;
	this->is_banned = is_banned;
	this->level = level;
	this->hour = hour;
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
void SteamUser::setName(string name) { this->name = name; }

double SteamUser::getBalance() { return balance; }

bool SteamUser::getIs_banned() { return is_banned; }

bool SteamUser::getLevel() { return level; }
void SteamUser::setLevel(int Level) { this->level = level; }

int SteamUser::getHour() { return hour; }
void SteamUser::setHour(int hour) { this->hour = hour; }