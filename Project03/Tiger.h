#pragma once
#include "Animal.h"
class Tiger : public Animal
{
public:
	Tiger(string name, int mass, int age, int speed) :
		Animal(name, mass, age, speed) { }
};

