#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include "point.hpp"
using namespace std;

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

double point::get_x() { return x; }
double point::get_y() { return y; }
double point::get_r() { return r; }

string point::print() {
	stringstream ss;
	ss << "(" << x << "," << y << ") and r = " << r;
	return ss.str();
}

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

