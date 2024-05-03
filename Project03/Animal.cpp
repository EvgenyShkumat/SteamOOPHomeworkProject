#include "Animal.h"
#include <string>
string Animal::getName() { return name; }
int Animal::getMass() { return mass; }
int Animal::getAge() { return age; }
double Animal::getSpeed() { return speed; }

string Animal::getInfo() {
	return name + ": mass = " + to_string(mass) + ", age = " + 
		to_string(age) + ", speed = " + to_string(speed) + "\n";
}