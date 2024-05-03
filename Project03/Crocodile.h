#pragma once
#include "Animal.h"
class Crocodile : public Animal
{
public:
	Crocodile(string name, int mass, int age, int speed) : 
		Animal(name, mass, age, speed) { }
};

