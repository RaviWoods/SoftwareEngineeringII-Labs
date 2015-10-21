#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include "point.hpp"
#include "tri.hpp"
using namespace std;

int main() {
	cout << "-------------------" << endl;
	point p1 = point(0,0);
	point p2 = point(1,0);
	point p3 = point(0,1);
	point vect = point(1,1);
	triangle t1 = triangle(p1,p2,p3);
	cout << "t1" << endl;
	cout << t1.print() << endl;
	cout << "peri = " << t1.perimeter() << endl;
	t1.translate(vect);
	cout << "t1" << endl;
	cout << t1.print() << endl;
	cout << "peri = " << t1.perimeter() << endl;

}
