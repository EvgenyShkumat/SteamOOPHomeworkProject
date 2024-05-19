#pragma once
#include "SteamUser.h"
#include "Group.h"

SteamUser operator+(SteamUser user, double  number) {
	return SteamUser(user.getName(), user.getIs_banned(),
		user.getBalance() + number, user.getLevel(), user.getLevel());
}

SteamUser operator-(SteamUser user, double number) {
	return SteamUser(user.getName(), user.getIs_banned(), 
		user.getBalance() + number, user.getLevel(), user.getLevel());
}

Group operator+(Group group1, Group group2) {
	Group temp;

	for (int i = 0; i < group1.getSize(); i++)
	{
		temp.add(group1.get(i));
	}

	for (int i = 0; i < group2.getSize(); i++)
	{
		temp.add(group2.get(i));
	}

	return temp;
}