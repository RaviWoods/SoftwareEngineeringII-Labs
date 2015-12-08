#ifndef BOOK_H
#define BOOK_H

#include "libs.hpp"
#include "items.hpp"

class Book: public Item {
	public: 
		Book(int quantity_in, std::string title_in, std::string author_in): Item(quantity_in, title_in), author(author_in) {};
		std::string stringify() const;
	private:
		std::string author;
};

#endif