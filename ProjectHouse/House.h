#pragma once
#include "Flat.h"
class House
{
private:
	string street;
	int house_number;
	int size = 0;
	static const int DEFAULT_SIZE = 100;
	Flat flats[DEFAULT_SIZE];
public:
	string getStreet();
	int getHouse_number();
	int getSize();
	
	bool add(Flat flat);
	int findIndex(Flat flat);
	Flat get(int index);
	string getInfo();

	int getAllSquare();
	int getAllLodgers();
	int getAllCost();
	double getAvgDensity();
	double getAvgCostPerMeter();
	int getFlatsMoreTwoLodgers();

	House(string street = "none", int house_number = 1);

};

