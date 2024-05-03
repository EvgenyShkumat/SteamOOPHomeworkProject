#include "Developer.h"

string Developer::getCountry() { return country; }

string Developer::getInfo() {
	return getName() + ": country - " + country + ", is banned: " + (getIs_banned() ? "Yes" : "No") + "\n";
}
