#include "../libs.h"
#include "stopwatch.hpp"
using namespace std;




int main() {
	Stopwatch mywatch;
	Counter mycounter();
	for (int i = 0; i <= 3600; i++) {
		cout << mywatch << endl;
		mywatch.tick();
	}
	cout << mywatch << endl;
	mywatch.reset();
	cout << "RESET" << endl;
	cout << mywatch << endl;
	return 0;
	/*
	ifstream inputdata;
	inputdata.open("inputdata.txt");
	
	if(!inputdata.is_open()){
		cout << "Couldn't open" << endl;
		exit(EXIT_FAILURE);
	}
	
	Stopwatch mywatch;
	V_OUT(mywatch);
	string input;
	while(inputdata >> input) {
		if (input == "r") {
			mywatch.reset();
		} else if (input == "p") {
			cout << mywatch << endl;
		} else if (input == "t") {
			mywatch.tick();
		} else {
			cout << "ERROR: Wrong Input" << endl;
		}
	}
	*/
}



