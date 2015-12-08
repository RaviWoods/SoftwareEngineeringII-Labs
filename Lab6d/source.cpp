#include "../libs.h"
#include "employee.hpp"
#include "paidemployee.hpp"
#include "junior.hpp"
#include "senior.hpp"
#include "intern.hpp"

using namespace std;

int main() {
	string role = "Coding, Maths, UI";
	string pword_in = "testing123";
	Senior* Ravi;
	try {
			Ravi = new Senior(100, role, pword_in, 20000, 200);
	} catch(const string& a) {
		cout << a << endl;
		exit(1);
	}
	string password, op;
	bool success = false;
	while (success == false) {
		cout << "Password for Senior = ";
		cin >> password;
		success = Ravi->login(password,op);
		cout << op << endl;
	}
	
	cout << "Successful Login" << endl;
	return 0;
}