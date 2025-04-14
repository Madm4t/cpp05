#include "Bureaucrat.hpp"
#include <iostream>

int main() {
	try {
		Bureaucrat a("Alpha", 150);
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch (const std::exception &err) {
		std::cerr << "Exception caught: "<< err.what() << std::endl;
	}
	return 0;
}