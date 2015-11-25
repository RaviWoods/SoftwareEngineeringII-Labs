#include "../libs.h"
#include "tri.hpp"
#include "quad.hpp"
#include "point.hpp"
#include "poly.hpp"

using namespace std;

int main() {
	Quadrilateral quad1 = Quadrilateral(Point(0,0),Point(0,1), Point(1,1), Point(1,0);
	cout << "Perimeter = " << quad1.perimeter() << endl;
	cout << quad1 << endl;
	return 0;
}
