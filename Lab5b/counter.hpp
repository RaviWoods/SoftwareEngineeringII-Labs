#ifndef COUNTER_HPP
#define COUNTER_HPP

#include "../libs.h"

class Counter {
	public:
		Counter();
		void increment();
		void reset();
		int get_count() const;
	private:
		int count;
};
#endif