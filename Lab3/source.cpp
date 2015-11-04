#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include "point.hpp"
using namespace std;

int member_point_unordsearch (const vector<point>& vin, point pin) {

	for(int i = 0; i < vin.size(); i++) { 
		if (vin[i] == pin) { return (i) ; };	
	}
	return vin.size();
}

int member_point_binsearch (const vector<point>& vin, point pin, int& ) {

	int lower_bound = 0;
	int upper_bound = vin.size();
	int bound_range = vin.size();
	while(bound_range != 1) {
		if (vin[floor(bound_range/2)] == pin) {
			return floor(bound_range/2);
		} else if (vin[floor(bound_range/2)] < pin) {
			lower_bound = floor(bound_range/2);
		} else {
			upper_bound = floor(bound_range/2);
		}
		bound_range = upper_bound - lower_bound;
	}
	if (vin[lower_bound] == pin) {
		return lower_bound;
	} else if (vin[upper_bound] == pin) {
		return upper_bound;
	} else {
		return vin.size(); 
	}
}


int main() {
	cout << "-------------------" << endl;
	point p1(1,1);
	vector<point> v1;
	int a = 0;
	for (int i = 0; i < 10; i++) {	
		v1.push_back(point(a,a));
		a++;
	}
	cout << member_point_unordsearch(v1,p1) << endl;
}


