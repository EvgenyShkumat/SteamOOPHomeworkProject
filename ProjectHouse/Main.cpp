#include <iostream>
#include "Flat.h"
#include "Human.h"
#include "House.h"
using namespace std;

int main() {
	Human human1{};
	Human human2("Alexander", "Nox", "man", 51);
	Human human3("Emily", "Smith", "woman", 34);

	Flat flat1(50, 100000, 10);

	flat1.add(human1);
	flat1.add(human2);
	flat1.add(human3);

	cout << flat1.getInfo();

	return 0;	
}