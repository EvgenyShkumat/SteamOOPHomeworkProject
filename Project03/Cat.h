#pragma once
#include "Animal.h"
class Cat : public Animal
{
public:
	Cat(string name, int mass, int age, int speed) :
		Animal(name, mass, age, speed) { }
};

