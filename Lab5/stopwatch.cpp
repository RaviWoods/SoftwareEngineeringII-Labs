#include "../libs.h"
#include "stopwatch.hpp"
#include "counter.hpp"
using namespace std;

Stopwatch::Stopwatch() {
	this->reset();
}

void Stopwatch::reset() {
	hours.reset();
	minutes.reset();
	seconds.reset();
}

void Stopwatch::tick() {
	seconds.increment();
	if (seconds.get_count() >= 60) {
		minutes.increment();
		seconds.reset();
	} 
	if(minutes.get_count() >= 60) {
		hours.increment();
		minutes.reset();
	}
}

ostream& operator<<(ostream& os, const Stopwatch& sw) {	
		os << sw.hours.get_count() << ":" << setfill('0') << setw(2) <<  sw.minutes.get_count() << ":" << setfill('0') << setw(2) <<  sw.seconds.get_count() << endl;
		return os;
}

/*

#ifndef STOPWATCH_H
#define STOPWATCH_H
class Stopwatch {
	public:
		Stopwatch();
		void tick();
		void reset();
	private:
		Counter hours;
		Counter minutes;
		Counter seconds;
		
}
#endif
*/