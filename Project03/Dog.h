#pragma once
#include "Animal.h"
class Dog : public Animal
{
public:
	Dog(string name, int mass, int age, int speed) :
		Animal(name, mass, age, speed) { }
};

