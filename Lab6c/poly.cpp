#include "../libs.h"
#include "poly.hpp"

using namespace std;

ostream& operator<<(ostream& os, const Polygon& poly) {
	os << poly.strmake();
	return os;
}
