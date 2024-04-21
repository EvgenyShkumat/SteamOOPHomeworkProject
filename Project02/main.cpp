#include <iostream>
#include "Integer.h"
using namespace std;

int main() {
	Integer number(18);

	cout << "The number is: " << number.getNumber() << endl;
	cout << "The square of the number is: " << number.power(2) << endl;
	cout << (number.isPrime() ? "The number is prime" : "The number is not prime") << endl;

	return 0;
}