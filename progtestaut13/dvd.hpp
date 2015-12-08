#ifndef DVD_H
#define DVD_H

#include "libs.hpp"
#include "items.hpp"

class Dvd: public Item {
	public: 
		Dvd(int quantity_in, std::string title_in, std::string actor_in, std::string director_in): Item(quantity_in, title_in), actor(actor_in), director(director_in) {};
		std::string stringify() const;
	private:
		std::string director;
		std::string actor;
};

#endif