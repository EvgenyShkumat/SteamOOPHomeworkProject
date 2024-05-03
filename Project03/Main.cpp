#include <iostream>
#include "Cat.h"
#include "Crocodile.h"
#include "Dog.h"
#include "Giraffe.h"
#include "Tiger.h"
using namespace std;

int main() {
	Tiger tiger("tiger", 250, 5, 70);
	Cat cat("cat", 5, 3, 40);
	Dog dog("dog", 8, 4, 30);
	Giraffe giraffe("giraffe", 500, 10, 30);
	Crocodile crocodile("crocodile", 300, 12, 50);

	cout << tiger.getInfo();
	cout << cat.getInfo();
	cout << dog.getInfo();
	cout << giraffe.getInfo();
	cout << crocodile.getInfo();

	return 0;
}