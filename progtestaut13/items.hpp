#ifndef ITEM_H
#define ITEM_H

#include "libs.hpp"

class Item {
	public:
		friend std::ostream& operator<<(std::ostream& os, const Item& item_in);
	protected:
		Item() {};
		Item(int quantity_in, std::string title_in) : quantity(quantity_in), title(title_in) {};
		virtual std::string stringify() const = 0;
		std::string title;
		int quantity;
};

#endif