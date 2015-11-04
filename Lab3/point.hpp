#ifndef POINT_HPP
#define POINT_HPP

class point {
public:	
	//point() : x(0), y(0), r(0) {}
	point(double x_in, double y_in) : x(x_in), y(y_in) {
		set_r();
	}
	void set_x(double x_in);
	void set_y(double y_in);
	void set_r();

	double get_x() const;
	double get_y() const;
	double get_r() const;

	friend bool operator <(const point& p1, const point& p2);
	friend bool operator ==(const point& p1, const point& p2);
	friend std::ostream& operator<<(std::ostream& os, const point& pt);

	std::string print();
	double twopointdist(point p2);
	void sym();
	void translate(point p2);
	
private:
	double x;
	double y;
	double r;
};

#endif
