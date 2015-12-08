#include "../libs.h"
//
using namespace std;

template<class T>
T my_min(const std::vector<T>& v) {
	typename std::vector<T>::const_iterator it;
	T min;
	min = *v.begin();
	for(it = v.begin()+1; it != v.end(); ++it) {
		if (*it < min) {
			min = *it;
		}
	}

	return min;
}


int main() {
	ifstream file_in;
	file_in.open("inputints.txt");
	if(!file_in.is_open()) {
		cout << "Couldn't open file" << endl;
		exit(EXIT_FAILURE);
	} 
	string tmp;
	vector<string> vin;
	while (file_in >> tmp) {
		vin.push_back(tmp);
	}
	cout << vin << endl;
	string min = my_min(vin);
	cout << min << endl;
	//cout << vin << endl;
}
