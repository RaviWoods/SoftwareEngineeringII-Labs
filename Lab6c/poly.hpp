#ifndef POLY_HPP
#define POLY_HPP
#include "../libs.h"
#include "point.hpp"

class Polygon {
public:
	virtual double perimeter() = 0;
	friend std::ostream& operator<<(std::ostream& os, const Polygon& poly);
	virtual void translate(Point vect) = 0;
	virtual std::string strmake() const = 0;
};

#endif
