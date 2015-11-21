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
}



