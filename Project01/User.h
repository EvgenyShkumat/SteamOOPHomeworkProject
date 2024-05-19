#pragma once
#include <iostream>
using namespace std;

class User
{
protected:
	string name;
	bool is_banned;
public:
	User(string name, bool is_banned) : is_banned(is_banned), name(name) { }
	string getName();
	bool getIs_banned();
	void setName(string thisName);
};

