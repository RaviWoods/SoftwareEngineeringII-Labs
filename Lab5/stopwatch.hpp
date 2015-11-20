#ifndef STOPWATCH_HPP
#define STOPWATCH_HPP

#include "../libs.h"
#include "counter.hpp"
#include "modulocounter.hpp"

class Stopwatch {
	public:
		Stopwatch();
		void tick();
		void reset();
		friend std::ostream& operator<<(std::ostream& os, const Stopwatch& sw);
	private:
		Counter hours;
		ModuloCounter minutes;
		ModuloCounter seconds;
		
};
#endif