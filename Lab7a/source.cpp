#include "../libs.h"
#include "myswap.hpp"

using namespace std;

int main() {
	//MyClass c1 = MyClass(1);
	//MyClass c2 = MyClass(2);
	//MyClass c3 = MyClass(3);
	int c1 = 1;
	int c2 = 2; 
	int c3 = 3;
	VOUT(c1);
	VOUT(c2);
	VOUT(c3);
	myswap(c1,c2,c3);
	VOUT(c1);
	VOUT(c2);
	VOUT(c3);
	return 0;
}
