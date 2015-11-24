#ifndef TRI_HPP
#define TRI_HPP
#include "../libs.h"
#include "point.hpp"
#include "poly.hpp"

class Triangle: public Polygon {
public:
	Triangle(Point p1_in, Point p2_in, Point p3_in) : p1(p1_in), p2(p2_in) , p3(p3_in) {}
	double perimeter();
	void translate(Point vect);
	std::string strmake() const;
private:
	Point p1;
	Point p2;
	Point p3;
};

#endif
