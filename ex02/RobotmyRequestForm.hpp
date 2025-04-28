#pragma once

#include <string>
#include "AForm.hpp"

class RobotmyRequestForm : public AForm
{
private:
	std::string const _target;

protected:
	void action() const override;

public:
	explicit RobotmyRequestForm(const std::string& target);
	RobotmyRequestForm(const RobotmyRequestForm& other) = delete;
	RobotmyRequestForm &operator=(const RobotmyRequestForm& other) = delete;
	~RobotmyRequestForm() override;
};