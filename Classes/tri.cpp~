#include "../libs.h"
#include "tri.hpp"

using namespace std;

double Triangle::perimeter() {
	double l1 = p1.twopointdist(p2);
	double l2 = p2.twopointdist(p3);
	double l3 = p3.twopointdist(p1);
	return (l1 + l2 + l3);	
}

void Triangle::translate(Point vect) {
	p1.translate(vect);
	p2.translate(vect);
	p3.translate(vect);
}

string strmake(const Polygon& poly) {
	stringstream ss;
	ss << "Triangle, with points: " << endl;
	ss << "p1: " << p1 << " , p2: " << p2 << " , p3: " << p3 << endl;
	return ss.str();
}

