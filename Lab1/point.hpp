#ifndef
POINT_HPP
#define
POINT_HPP

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

#endif
