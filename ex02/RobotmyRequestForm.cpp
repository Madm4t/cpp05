#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(const std::string& target)
	: AForm("RobotmyrequestForm", 72, 45)
	, _target(target)
{}

RobotmyRequestForm::~RobotmyRequestForm()
{
	std::cout << "RobotmyRequest Form destructed." << std::endl;
}

void RobotmyRequestForm::action() const {
	std::cout	<< "*makes drilling noise* " 
				<< _target
				<< " has been robotomized successfully 50% of the time."
				<< std::endl;
}