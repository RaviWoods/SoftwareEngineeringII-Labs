#include "libs.hpp"
#include "items.hpp"
using namespace std;

ostream& operator<<(ostream& os, const Item& item_in) {
	os << item_in.stringify();
	return os;
}