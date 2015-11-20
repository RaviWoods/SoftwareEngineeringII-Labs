#include "../libs.h"
#include "modulocounter.hpp"
using namespace std;


ModuloCounter::ModuloCounter(int m) : modulo(m) {};

bool ModuloCounter::increment() {
	c.increment();
	if((modulo > 0) && (c.get_count() >= modulo) ) {
		c.reset();
		return true;
	}
	return false;
}

void ModuloCounter::reset() {
	c.reset();
}

int ModuloCounter::get_count() const {
	return c.get_count();
}

/*
Header for reference
#ifndef MODULOCOUNTER_H
#define MODULOCOUNTER_H
#include "counter.hpp"

class ModuloCounter {
	public:
		ModuloCounter(int m = 0);
		bool increment();
		void reset();
		int get_count() const;
		
	private: 
		int modulo;
		Counter c;
}
#end
*/