#include "../libs.h"
#include "counter.hpp"

using namespace std;

Counter::Counter() {
	count = 0;
}

void Counter::reset() {
	count = 0;
	return;
}

void Counter::increment() {
	count++;
	return;
}

int Counter::get_count() const {
	return count;
}
/*
Header for reference

#ifndef COUNTER_H
#define COUNTER_H
class Counter {
	public:
		Counter();
		void increment();
		void reset();
		int get_count() const;
	private:
		int count;
}
#endif
*/