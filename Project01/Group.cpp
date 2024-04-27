#include "Server.h"

bool Server::add(SteamUser user) {
	if (size < DEFAULT_SIZE) {
		list[size++] = user;
		return true;
	}

	return false;
}

string Server::getInfo() {
	string s = "Server of users:\n";

	for (int i = 0; i < size; i++)
	{
		s += list[i].getInfo() + "\n\n";
	}

	return s;
}

int Server::getSize() { return size; }

Server::Server(int size) {
	this->size = size;
}

SteamUser Server::get(int index) {
	if (index >= 0 && index <= size) {
		return list[index];
	}

	return SteamUser();
}

bool Server::set(SteamUser user, int index) {
	if (index >= 0 && index <= size) {
		list[index] = user;
		return true;
	}

	return false;
}