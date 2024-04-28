#include <iostream>
#include "Flat.h"
#include "Human.h"
#include "House.h"
using namespace std;

int main() {
	Human human1{};
	Human human2("Alexander", "Nox", "man", 51);
	Human human3("Emily", "Smith", "woman", 34);

	Flat flat1(60, 100000, 1);
	flat1.add(human1);
	flat1.add(human2);
	flat1.add(human3);

	Human human4{"Petr", "Petrov", "man", 22};

	Flat flat2(35, 40000, 2);
	flat2.add(human4);

	Human human5{"Mike", "Wilson", "man", 42};
	Human human6{"John", "Jones", "man", 38};

	Flat flat3(50, 75000, 3);
	flat3.add(human5);
	flat3.add(human6);

	House house1("Dekabristov", 16);
	house1.add(flat1);
	house1.add(flat2);
	house1.add(flat3);

	cout << house1.getInfo();

	return 0;	
}