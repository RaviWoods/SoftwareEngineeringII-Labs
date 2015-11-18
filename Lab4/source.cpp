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

	int nums[] = {3,1,4,1,2,3,4,5,3,2,4,5,3,2,4,4,3,4,3,3,2};	
	intvector ravi = intvector(10, nums);

	for (int i = 0; i < 100; i++) {
		ravi.push_back(i);
	}
	intvector alkesh = ravi;
	for (int i = 0; i < alkesh.size(); i++) {
		cout << alkesh[i] << endl;
	}
	cout << "Find = " << alkesh.find(99) << endl;
}



