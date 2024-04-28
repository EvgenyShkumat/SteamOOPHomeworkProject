#include "House.h"
#include <string>
using namespace std;

string House::getStreet() { return street; }
int House::getHouse_number() { return house_number; }
int House::getSize() { return size; }

bool House::add(Flat flat) {
	if (size < DEFAULT_SIZE) {
		flats[size++] = flat;
		return true;
	}

	return false;
}

int House::findIndex(Flat flat) {
	for (int i = 0; i < size; i++)
	{
		if (flats[i].getPrice() == flat.getPrice() &&
			flats[i].getSquare() == flat.getSquare() &&
			flats[i].getFlat_number() == flat.getFlat_number() &&
			flats[i].getSize() == flat.getSize()) {
			return i;
		}
	}

	return -1;
}

Flat House::get(int index) {
	if (index >= 0 && index <= size) {
		return flats[index];
	}
	return Flat();
}
string House::getInfo() {
	string msg = street + ", " + "House " + to_string(house_number) + ":\n";

	for (int i = 0; i < size; i++)
	{
		msg += flats[i].getInfo() + "\n";
	}

	return msg;
}

House::House(string street, int house_number) {
	this->street = street;
	this->house_number = house_number;
}

int House::getAllLodgers() {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += flats[i].getSize();
	}

	return sum;
}

int House::getAllSquare() {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += flats[i].getSquare();
	}

	return sum;
}

int House::getAllCost() {
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += flats[i].getPrice();
	}

	return sum;
}

double House::getAvgDensity() {
	return getAllLodgers() / 1.0 / (size / 1.0);
}

double House::getAvgCostPerMeter() {
	double sum = 0.0;

	for (int i = 0; i < size; i++)
	{
		sum += flats[i].getPricePerSquareMeter();
	}

	return sum / (size / 1.0);
}

int House::getFlatsMoreTwoLodgers() {
	int sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		if (flats[i].getSize() >= 2) {
			sum++;
		}
	}

	return sum;
}