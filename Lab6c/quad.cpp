#include "../libs.h"
#include "point.hpp"
#include "poly.hpp"
#include "quad.hpp"

using namespace std;

double Quadrilateral::perimeter() {
	double l1 = p1.twopointdist(p2);
	double l2 = p2.twopointdist(p3);
	double l3 = p3.twopointdist(p4);
	double l4 = p4.twopointdist(p1);
	return (l1 + l2 + l3 + l4);	
}

void Quadrilateral::translate(Point vect) {
	p1.translate(vect);
	p2.translate(vect);
	p3.translate(vect);
	p4.translate(vect);
}

string Quadrilateral::strmake() const {
	stringstream ss;
	ss << "Quadrilateral, with points: " << endl;
	ss << "p1: " << p1 << " , p2: " << p2 << " , p3: " << p3 << "p4: " << p4 << endl;
	return ss.str();
}

