#pragma once
#include "Animal.h"
class Giraffe : public Animal
{
public:
	Giraffe(string name, int mass, int age, int speed) :
		Animal(name, mass, age, speed) { }
};

