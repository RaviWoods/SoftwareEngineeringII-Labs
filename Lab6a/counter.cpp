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

bool Counter::increment() {
	count++;
	return false;
}

int Counter::get_count() const {
	return count;
}

ostream& operator<<(ostream& os, const Counter& ctr) {
	os << ctr.str();
	return os;
}

string Counter::str() const {
	stringstream ss;
	ss << count;
	return ss.str();
	
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