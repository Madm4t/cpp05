#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat a("Alpha", 150);
		Bureaucrat b("Beta", 42);
		a.decrementGrade();
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}
	try {
		Bureaucrat c("Gamma", 42);
		std::cout << c << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}
	return 0;
}