#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "intvector.hpp"
using namespace std;


int main() {

	/*
	ifstream infile;	
	infile.open("inputpoints.txt");
	if(!infile.is_open()){
		cout << "Couldn't open" << endl;
		exit(EXIT_FAILURE);
	}
	point temp(100,100);
	vector<point> v1;
	while(infile >> temp) {
		v1.push_back(temp);
	} 
	cout << "v1.size = " << v1.size() << endl;
	cout << "v1.capacity = " << v1.capacity() << endl;
	for(int i = 0; i < v1.size() ; i++) {
		cout << v1[i] << endl;
	}
	*/

	int nums[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};	
	intvector ravi = intvector(10, nums);

	for (int i = 0; i < 100; i++) {
		ravi.push_back(i);
	}

	for (int i = 0; i < ravi.size(); i++) {
		cout << ravi.at(i) << endl;
	}
}



