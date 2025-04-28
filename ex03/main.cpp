#include "Intern.hpp"
#include <iostream>


int main() {
    Intern  someIntern;

    AForm* f1 = someIntern.makeForm("robotomy request", "Bender");
    if (f1) {
        std::cout << *f1 << "\n";
        delete f1;
    }

    AForm* nope = someIntern.makeForm("not a real form", "XXX");
	(void)nope;

    return 0;
}
