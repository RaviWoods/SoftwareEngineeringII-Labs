#ifndef COUNTER_HPP
#define COUNTER_HPP

#include "../libs.h"

class Counter {
	public:
		Counter();
		virtual bool increment();
		void reset();
		int get_count() const;
		virtual std::string str() const;
		friend std::ostream& operator<<(std::ostream& os, const Counter& ctr);
	private:
		int count;
};
#endif