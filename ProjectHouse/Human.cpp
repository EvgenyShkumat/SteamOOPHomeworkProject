#include "Human.h"
#include <string>

int Human::getAge() { return age; }
string Human::getName() { return name; }
string Human::getGender() { return gender; }
string Human::getSurname() { return surname; }

string Human::getInfo() {
	return "Name: " + name + "\nSurname: " + surname + 
		"\nGender: " + gender + "\nAge: " + to_string(age) + "\n";
}

Human::Human(string name, string surname , string gender, int age) {
	this->age = age;
	this->name = name;
	this->surname = surname;
	if (gender == "woman" || gender == "man" || gender == "n/a") {
		this->gender = gender;
	}
}