#ifndef SENIOR_H
#define SENIOR_H
#include "../libs.h"
#include "paidemployee.hpp"
#include "employee.hpp"

class Senior : public PaidEmployee {
	
	public:
		Senior(int num_in, std::string role_in, std::string password_in, int pay_in, double bonus_percent_in) : 
		PaidEmployee(num_in, role_in, password_in, pay_in) {
			bonus_percent = bonus_percent_in;
			if (bonus_percent_in < 0 || bonus_percent_in > 100) {
				std::string a = "Percent not in correct range";
				throw a;
			}
				
		}
		
		std::string get_output() {
			std::stringstream ss;
			ss << "Role = " << role << std::endl;
			ss << "Pay = £" << pay << std::endl;
			ss << "Bonus Percent = " << bonus_percent << "%" << std::endl;
			return ss.str();
		}
	private:
		double bonus_percent;
};

#endif