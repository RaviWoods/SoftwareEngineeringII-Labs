#ifndef JUNIOR_H
#define JUNIOR_H
#include "../libs.h"
#include "paidemployee.hpp"
#include "employee.hpp"

class Junior : public PaidEmployee {
	
	public:
		Junior(int num_in, std::string role_in, std::string password_in, int pay_in) : 
		PaidEmployee(num_in, role_in, password_in, pay_in){}
		
		std::string get_output() {
			std::stringstream ss;
			ss << "Role = " << role << std::endl;
			ss << "Pay = £" << pay << std::endl;
			return ss.str();
		}
};

#endif