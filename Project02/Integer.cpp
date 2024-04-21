#include "Integer.h"

Integer::Integer(int number) : number(number) { cout << "The constructor was called"; }
Integer::Integer() : Integer(0) {}

int Integer::getNumber() { return number; }
void Integer::setNumber(int number) { this->number = number; }

int Integer::power(int power) { return pow(number, power); }

bool Integer::isPrime() {
	bool prime = true;

	for (int i = 2; i < number / 2; i++)
	{
		if (number % i == 0) {
			prime = false;
			break;
		}
	}

	return prime;
}

