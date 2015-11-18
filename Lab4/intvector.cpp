#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <cmath>
#include <ostream>
#include "intvector.hpp"
using namespace std;

intvector::intvector() {
	v = new int[1];
	d_size = 0;
	d_capacity = 1;
}

intvector::~intvector() {
	delete[] v;
}

intvector::intvector(const intvector &vin) {
	//cout << "Copy constructor" << endl;
	//delete[] v;
	v = new int[vin.size()];
	this->d_size = vin.size();
	this->d_capacity = vin.capacity();
	for(int i = 0; i < this->d_size; i++) {
			v[i] = vin.at(i);
	}

}

int intvector::operator[](const int index) {
	return v[index];
}

int intvector::find(const int value) {
	for(int i = 0; i < d_size; i++) {
		if (v[i] == value) {
			return i;
		}
	}
	return -2;
}
void intvector::operator=(const intvector &vin) {
	
	if(&vin != this) {
		cout << "Assignment operator" << endl;
		delete[] v;
		v = new int[vin.size()];
		this->d_size = vin.size();
		this->d_capacity = vin.capacity();
		for(int i = 0; i < this->d_size; i++) {
				v[i] = vin.at(i);
		}
	}

}
intvector::intvector(int size) {
	
	d_size = 0;
	d_capacity = size;

	v = new int[d_capacity];
}


intvector::intvector(int size, int n[]) {
	
	d_size = size;
	d_capacity = size;

	v = new int[d_capacity];
	for(int i = 0; i < size; i++) {
		v[i] = n[i];
	}
}


intvector::intvector(int size, int n) {
	
	d_size = size;
	d_capacity = size;

	v = new int[d_capacity];
	for(int i = 0; i < size; i++) {
		v[i] = n;
	}
}


int intvector::at(int index) const { return v[index]; }

void intvector::push_back(int n) {
	if (d_size >= d_capacity) {
		d_capacity *= 2;
		int* tempv;
		tempv = new int[d_capacity];
		for(int i = 0; i < d_size; i++) {
			tempv[i] = v[i];
		}
		delete[] v;
		v = tempv;
	}
	v[d_size] = n;
	d_size++;
}

int intvector::size() const { return d_size; }

int intvector::capacity() const { return d_capacity; }
