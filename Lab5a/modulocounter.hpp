#ifndef MODULOCOUNTER_H
#define MODULOCOUNTER_H
#include "../libs.h"
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
};
#endif