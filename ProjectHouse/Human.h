#pragma once
#include <iostream>
using namespace std;

class Human
{
private:
	int age;
	string name;
	string surname;
	string gender;
public:
	int getAge();
	string getName();
	string getGender();
	string getSurname();

	Human(string name = "no name", string surname = "no surname", 
		string gender = "n/a", int age = 18);

	string getInfo();
};

