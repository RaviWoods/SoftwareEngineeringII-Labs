#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <cmath>
#include <ostream>
#include "point.hpp"
using namespace std;

bool operator<(const point& p1, const point& p2) {
	if (abs(p1.r) < abs(p2.r)) {
		return true;
	} else {
		return false;
	}
}

bool operator==(const point& p1, const point& p2) {
	if ((p1.y == p2.y) && (p1.x == p2.x)) {
		return true;
	} else {
		return false;
	}
}

ostream& operator<<(ostream& os, const point& pt)
{
	os << "(" << pt.get_x() << "," << pt.get_y() << ")";
	return os;
}

istream& operator>>(istream& is, point& pt)
{
	int ix,iy;
	is >> ix >> iy ;
	pt.x = ix;
	pt.y = iy;
	return is;
}




void point::set_x(double x_in) {
	x = x_in;
	set_r();

}

void point::set_y(double y_in) {
	y = y_in;
	set_r();
}


void point::set_r() {
	r = sqrt(pow(x,2) + pow(y,2));
}

double point::get_x() const { return x; }
double point::get_y() const { return y; }
double point::get_r() const { return r; }


double point::twopointdist(point p2) {
	return sqrt( pow((x-p2.get_x()),2) + pow((y-p2.get_y()),2) ) ;
}

void point::sym() {
	set_x(-x);
	set_y(-y);
}

void point::translate(point p2) {
	set_x(x + p2.get_x());
	set_y(y + p2.get_y());
}

