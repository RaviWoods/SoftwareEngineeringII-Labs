#include "libs.hpp"
#include "items.hpp"
#include "books.hpp"
using namespace std;

string Book::stringify() const {
	std::stringstream ss;
	ss << "book: " << title << " by " << author << " (" << quantity << ")";
	return ss.str();
}