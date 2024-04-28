#include "Flat.h"
#include <string>
using namespace std;

int Flat::getSize() { return size; }
int Flat::getSquare() { return square; }
int Flat::getPrice() { return price; }
int Flat::getFlat_number() { return flat_number; }

void Flat::add(Human human) {
	if (size == 0) {
		lodgers = new Human[1];
		*lodgers = human;
	}
	else {
		Human* temp = new Human[size + 1];

		for (int i = 0; i < size; i++)
		{
			*(temp + i) = *(lodgers + i);
		}
		*(temp + size) = human;
		delete[] lodgers;
		lodgers = temp;
	}
	size++;
}

int Flat::findIndex(Human human) {
	for (int i = 0; i < size; i++)
	{
		if (human.getAge() == lodgers[i].getAge() &&
			human.getName() == lodgers[i].getName() &&
			human.getGender() == lodgers[i].getGender() &&
			human.getSurname() == lodgers[i].getSurname()) {
			return i;
		}
	}

	return -1;
}

void Flat::remove(Human human) {
	int index = findIndex(human);
	
	if (index != -1) {
		Human* temp = new Human[size - 1];

		for (int i = 0, j = 0; i < size; i++)
		{
			if (i != index) {
				*(temp + j) = *(lodgers + i);
				j++;
			}
		}

		size--;
		delete[] lodgers;
		lodgers = temp;
	}
}

Human Flat::get(int index) {
	if (index >= 0 && index <= size) {
		return lodgers[index];
	}
	
	return Human();
}

string Flat::getInfo() {
	string msg = "-----------------------------\nSquare: " + 
		to_string(square) + "\nPrice: " + to_string(price)
		+ "\nNumber: " + to_string(flat_number) + "\n\nFlat lodgers:\n\n";
	
	for (int i = 0; i < size; i++)
	{
		msg += lodgers[i].getInfo() + "\n";
	}

	msg += "-----------------------------";

	return msg;
}

double Flat::getPricePerSquareMeter() {
	return (price * 1.0) / (square * 1.0);
}

Flat::~Flat() {
	//delete[] lodgers;
}

Flat::Flat(int square, int price, int flat_number) {
	this->price = price;
	this->square = square;
	this->flat_number = flat_number;
}

