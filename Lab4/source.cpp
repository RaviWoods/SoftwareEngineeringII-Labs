#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <fstream>
#include <cstdlib>
#include "point.hpp"
using namespace std;


int main() {
	ifstream infile;	
	infile.open("inputpoints.txt");
	if(!infile.is_open()){
		cout << "Couldn't open" << endl;
		exit(EXIT_FAILURE);
	}
	point temp;
	vector<point> v1;
	int a = 0;
	while(infile >> temp) {
		a++;
		v1.push_back(temp);
	} 
	//
	cout << "a = " << a << endl;
	for(int i = 0; i < v1.size() ; i++) {
		cout << v1[i] << endl;
	}

}



