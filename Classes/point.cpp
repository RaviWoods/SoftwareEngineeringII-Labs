#include "../libs.h"
#include "point.hpp"
using namespace std;

bool operator<(const Point& p1, const Point& p2) {
	if (abs(p1.r) < abs(p2.r)) {
		return true;
	} else {
		return false;
	}
}

bool operator==(const Point& p1, const Point& p2) {
	if ((p1.y == p2.y) && (p1.x == p2.x)) {
		return true;
	} else {
		return false;
	}
}

ostream& operator<<(ostream& os, const Point& pt)
{
	os << "(" << pt.get_x() << "," << pt.get_y() << ")";
	return os;
}

istream& operator>>(istream& is, Point& pt)
{
	double ix = 10, iy = 20;
	is >> ix >> iy ;
	pt.x = ix;
	pt.y = iy;
	return is;
}




void Point::set_x(double x_in) {
	x = x_in;
	set_r();

}

void Point::set_y(double y_in) {
	y = y_in;
	set_r();
}


void Point::set_r() {
	r = sqrt(pow(x,2) + pow(y,2));
}

double Point::get_x() const { return x; }
double Point::get_y() const { return y; }
double Point::get_r() const { return r; }


double Point::twopointdist(Point p2) {
	return sqrt( pow((x-p2.get_x()),2) + pow((y-p2.get_y()),2) ) ;
}

void Point::sym() {
	set_x(-x);
	set_y(-y);
}

void Point::translate(Point p2) {
	set_x(x + p2.get_x());
	set_y(y + p2.get_y());
}

