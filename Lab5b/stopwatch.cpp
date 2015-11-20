#include "../libs.h"
#include "stopwatch.hpp"
#include "modulocounter.hpp"
#include "counter.hpp"
using namespace std;

Stopwatch::Stopwatch() : seconds(60), minutes(60) {};

void Stopwatch::reset() {
	hours.reset();
	minutes.reset();
	seconds.reset();
}

void Stopwatch::tick() {
	if(seconds.increment()) {	
		if(minutes.increment()) {
			hours.increment();
		}
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