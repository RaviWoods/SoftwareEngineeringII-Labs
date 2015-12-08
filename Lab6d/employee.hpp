#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "../libs.h"

class Employee {
	
	public:
		
		
		friend bool operator==(const Employee& e1, const Employee& e2) {
			if(e1.number == e2.number) {
				return true;
			} else {
				return false;
			}
		}
		bool login(std::string password_in, std::string& output) {
			if(password == password_in) {
				output = get_output();
				return true;
			} else {
				output = "WRONG PASSWORD";
				return false;
			}
		}
		virtual std::string get_output() = 0;
	
	protected:
		Employee(int num_in, std::string role_in, std::string password_in) : number(num_in), role(role_in), password(password_in) {}
		
		std::string role;
		int number;
		std::string password;
		
}; 

#endif