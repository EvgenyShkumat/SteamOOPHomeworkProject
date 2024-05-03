#pragma once
#include <iostream>
using namespace std;

class Animal
{
private:
	string name;
	int mass;
	int age;
	double speed;
public:
	string getName();
	int getMass();
	int getAge();
	double getSpeed();
	
	string getInfo();

	Animal(string name, int mass, int age, int speed) : 
		name(name), mass(mass), age(age), speed(speed){ }
};

