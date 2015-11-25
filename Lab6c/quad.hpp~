#ifndef QUAD_HPP
#define QUAD_HPP
#include "../libs.h"
#include "point.hpp"
#include "poly.hpp"

class Quadrilateral: public Polygon {
public:
	Quadrilateral(Point p1_in, Point p2_in, Point p3_in, Point p4_in) : p1(p1_in), p2(p2_in) , p3(p3_in), p4(p4_in) {}
	double perimeter();
	void translate(Point vect);
	std::string strmake() const;
private:
	Point p1;
	Point p2;
	Point p3;
	Point p4;
};

#endif
