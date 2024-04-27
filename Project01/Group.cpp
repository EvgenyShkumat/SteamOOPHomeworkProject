#include "Group.h"

void Group::add(SteamUser user) {
	if (size == 0) {
		list = new SteamUser[1];
		*list = user;
	}
	else {
		SteamUser* temp = new SteamUser[size + 1];

		for (int i = 0; i < size; i++)
		{
			*(temp + i) = *(list + i);
		}
		*(temp + size) = user;
		delete[] list;
		list = temp;
	}

	size++;
}

void Group::remove(int index) {
	if (index >= 0 && index < size) {
		SteamUser* temp = new SteamUser[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				*(temp + j) = *(list + i);
				j++;
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

void Group::remove(SteamUser user) {
	int index = getFirstIndex(user);

	if (index != -1) {
		SteamUser* temp = new SteamUser[size - 1];
		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				*(temp + j) = *(list + i);
				j++;
			}
		}
		size--;
		delete[] list;
		list = temp;
	}
}

int Group::getFirstIndex(SteamUser user) {
	for (int i = 0; i < size; i++)
	{
		if (list[i].getBalance() == user.getBalance()
			&& list[i].getHour() == user.getHour()
			&& list[i].getIs_banned() == user.getIs_banned()
			&& list[i].getLevel() == user.getLevel()
			&& list[i].getName() == user.getName()) {
			return i;
		}
	}

	return -1;
}

string Group::getInfo() {
	string s = "Server of users:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].getInfo() + "\n\n";
	}

	return s;
}

int Group::getSize() { return size; }

Group::Group(int size) {
	this->size = size;
}

SteamUser Group::get(int index) {
	if (index >= 0 && index <= size) {
		return list[index];
	}

	return SteamUser();
}

bool Group::set(SteamUser user, int index) {
	if (index >= 0 && index <= size) {
		list[index] = user;
		return true;
	}

	return false;
}