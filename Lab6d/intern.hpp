#ifndef INTERN_H
#define INTERN_H
#include "../libs.h"
#include "employee.hpp"

class Intern : public Employee {
	
	public:
		Intern(int num_in, std::string role_in, std::string password_in) : 
		Employee(num_in, role_in, password_in){}
		
		std::string get_output() {
			std::stringstream ss;
			ss << "Role = " << role << std::endl;
			return ss.str();
		}
};

#endif
