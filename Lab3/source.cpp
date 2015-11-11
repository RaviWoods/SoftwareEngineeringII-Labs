#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include "point.hpp"
using namespace std;

int member_point_unordsearch (const vector<point>& vin, point pin,  bool& found) {
	
	found = true;
	for(int i = 0; i < vin.size(); i++) { 
		if (vin[i] == pin) { return (i) ; };	
	}
	found = false;
	return vin.size();
}

int member_point_binsearch (const vector<point>& vin, point pin, bool& found) {
	found = true;
	//cout << "input = " << pin << "\t";
	int lower_bound = 0;
	int upper_bound = vin.size();
	int bound_range = vin.size();
	while(bound_range != 1) {
		
		if (vin[floor(lower_bound + bound_range/2)] == pin) {
			
			//cout << "PASS" << "\t";
			return lower_bound + floor(bound_range/2);
		} else if (vin[floor(lower_bound + bound_range/2)] < pin) {
			lower_bound = lower_bound + floor(bound_range/2);
		} else {
			upper_bound = lower_bound + floor(bound_range/2);
		}
		bound_range = upper_bound - lower_bound;
		//cout << "lb = " << lower_bound << endl;	
		//cout << "ub = " << upper_bound << endl;
		
	}
	if (vin[lower_bound] == pin) {
		//cout << "PASS" << "\t";
		return lower_bound;
	} else if (vin[upper_bound] == pin) {
		//cout << "PASS" << "\t";
		return upper_bound;
	} else {
		found = false;
		//cout << "FAIL" << "\t";
		return vin.size(); 
	}
}

int main() {
	cout << "-------------------" << endl;
	point p1(2,3);
	vector<point> v1;
	vector<point> v2;
	vector<int> v3;

	
}



