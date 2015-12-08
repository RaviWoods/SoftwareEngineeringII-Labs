#include "libs.hpp"
#include "items.hpp"
#include "dvd.hpp"
using namespace std;

string Dvd::stringify() const {
	std::stringstream ss;
	ss << "dvd: " << title << " directed by " << director << " with " << actor << " (" << quantity << ")";
	return ss.str();
}