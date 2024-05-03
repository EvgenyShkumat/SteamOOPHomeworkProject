#pragma once
#include <iostream>
#include "User.h"
using namespace std;

class Developer : public User
{
private:
	string country;
public:
	Developer(string name, bool is_banned, string country) :
		User(name, is_banned), country(country) {}

	string getCountry();
	string getInfo();
};

