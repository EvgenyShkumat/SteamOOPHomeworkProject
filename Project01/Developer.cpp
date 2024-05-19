#include "Developer.h"

string Developer::getCountry() { return country; }

string Developer::getInfo() {
	return name + ": country - " + country + ", is banned: " + (is_banned ? "Yes" : "No") + "\n";
}
