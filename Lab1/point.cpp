#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

class point {
public:	
	point() : x(0), y(0), r(0) {}
	point(double x_in, double y_in) : x(x_in), y(y_in) {
		set_r();
	}
	void set_x(double x_in);
	void set_y(double y_in);
	void set_r();

	double get_x();
	double get_y();
	double get_r();

	string print();
	double twopointdist(point p2);
	void sym();
	void translate(point p2);
	
private:
	double x;
	double y;
	double r;
};

class triangle {
public:
	triangle(point p1_in, point p2_in, point p3_in) : p1(p1_in), p2(p2_in) , p3(p3_in) {}

	double perimeter();
	string print();
	void translate(point vect);

private:
	point p1;
	point p2;
	point p3;
};

double triangle::perimeter() {
	double l1 = p1.twopointdist(p2);
	double l2 = p2.twopointdist(p3);
	double l3 = p3.twopointdist(p1);
	return (l1 + l2 + l3);	
}

void triangle::translate(point vect) {
	p1.translate(vect);
	p2.translate(vect);
	p3.translate(vect);
}

string triangle::print() {
	stringstream ss;
	ss << "p1: " << p1.print() << endl;
	ss << "p2: " << p2.print() << endl;
	ss << "p3: " << p3.print() << endl;
	return ss.str();
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
