#pragma once
#include <iostream>
using namespace std;

class Integer
{
private:
	int number;

public: 
	Integer(int number);
	Integer();

	int getNumber();
	void setNumber(int number);

	int power(int power);
	bool isPrime();
};

