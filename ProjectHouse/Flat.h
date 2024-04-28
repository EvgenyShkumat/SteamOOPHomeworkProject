#pragma once
#include "Human.h"

class Flat
{
private:
	Human* lodgers;
	int size = 0;
	int square;
	int price;
	int flat_number;
public:
	int getSize();
	int getSquare();
	int getPrice();
	int getFlat_number();

	void add(Human human);
	void remove(Human human);
	Human get(int index);
	int findIndex(Human human);
	double getPricePerSquareMeter();
	string getInfo();
	
	~Flat();
	Flat(int square = 0, int price = 0, int flat_number = 0);
};

