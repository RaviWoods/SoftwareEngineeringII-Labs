#include "libs.hpp"
#include "items.hpp"
#include "books.hpp"
#include "dvd.hpp"
using namespace	std;
//
int main() {

	ifstream bookfile;
	bookfile.open("books.txt");
	if (!bookfile.is_open()) {
		cout << "COULDN'T OPEN BOOKS.TXT" << endl;
		exit(EXIT_FAILURE);
	}
	
	ifstream dvdfile;
	dvdfile.open("dvds.txt");
	if (!dvdfile.is_open()) {
		cout << "COULDN'T OPEN DVDS.TXT" << endl;
		exit(EXIT_FAILURE);
	}
	
	vector<Item*> collection;
	string tmp_author;
	string tmp_title;
	string tmp_director;
	string tmp_actor;
	int tmp_quantity;
	
	Item *tmp_item;
	while(bookfile >> tmp_author >> tmp_title >> tmp_quantity) {
		tmp_item = new Book(tmp_quantity, tmp_title, tmp_author);
		collection.push_back(tmp_item);
	}
	
	while(dvdfile >> tmp_director >> tmp_title >> tmp_actor >> tmp_quantity) {
		tmp_item = new Dvd(tmp_quantity,tmp_title,tmp_actor,tmp_director);
		collection.push_back(tmp_item);
	}
	
	for(vector<Item*>::iterator it = collection.begin(); it != collection.end(); ++it) {
		cout << **it << endl;
	}
	
	for(vector<Item*>::iterator it = collection.begin(); it != collection.end(); ++it) {
		delete *it;
	}
}