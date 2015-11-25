#ifndef MYSWAP_HPP
#define MYSWAP_HPP
#include "../libs.h"

template <class Type>
void myswap(Type& a, Type& b) {
	Type c;
	c = a; 
	a = b;
	b = c;
}

class MyClass {
	public:
		MyClass() {
			val = 0;
		}
		MyClass(int val_in) : val(val_in) {}
		
		friend std::ostream& operator<<(std::ostream& os, const MyClass& mc) {
			os << mc.val;	
			return os;
		}
	private:
		int val;
};

#endif
