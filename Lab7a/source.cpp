#include "../libs.h"
#include "myswap.hpp"

using namespace std;

int main() {
	MyClass c1 = MyClass(1);
	MyClass c2 = MyClass(2);
	VOUT(c1);
	VOUT(c2);
	myswap(c1,c2);
	VOUT(c1);
	VOUT(c2);
	return 0;
}
