#ifndef PAIDEMPLOYEE_H
#define PAIDEMPLOYEE_H
#include "../libs.h"
#include "employee.hpp"

class PaidEmployee : public Employee {
	
	
	protected:
		PaidEmployee(int num_in, std::string role_in, std::string password_in, int pay_in) : 
		Employee(num_in, role_in, password_in), pay(pay_in) {}
		int pay;
};

#endif