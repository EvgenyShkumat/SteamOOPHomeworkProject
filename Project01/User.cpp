#include "User.h"

string User::getName() { return name; }
bool User::getIs_banned() { return is_banned; }

void User::setName(string name) { this->getName() = name; }
