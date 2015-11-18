#ifndef INTVECTOR_HPP 
#define INTVECTOR_HPP

class intvector{
	public:
		intvector();
		intvector(int size);
	
		intvector(int size, int n[]);
		intvector(int size, int n);
		~intvector();
		
		void push_back(int n);
		int at (int index)const;
		int size() const;
		int capacity() const;
	private:
		int* v;
		int d_size;
		int d_capacity; 
};

#endif
