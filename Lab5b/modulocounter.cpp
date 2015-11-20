#include "../libs.h"
#include "modulocounter.hpp"
using namespace std;


ModuloCounter::ModuloCounter(int m) : Counter(),modulo(m) {};

bool ModuloCounter::increment() {
	Counter::increment();
	if((modulo > 0) && (get_count() >= modulo) ) {
		reset();
		return true;
	}
	return false;
}