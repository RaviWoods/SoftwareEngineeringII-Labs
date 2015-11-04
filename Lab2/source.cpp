#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include "point.hpp"
#include "tri.hpp"
using namespace std;

int main() {
	cout << "-------------------" << endl;
	triangle ravi = triangle(point(0,0),point(1,0),point(0,1));
	cout << ravi.print() << endl;

}
