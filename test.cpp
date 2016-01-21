#include <iostream>
//ijwgojnbsogjojg
class B {
	protected:
		B(){}
	public:
		virtual int getX() = 0;
};

class I: public B {
	private:
		int *m_x;
	public:
		I(int v) : m_x(new int(v)) {}
		virtual int getX() { return *m_x;}
		~I() {delete m_x;}
};

int main () {
	B *b = new I(5);
	std::cout << b->getX();
	delete b;
	return 0;
}