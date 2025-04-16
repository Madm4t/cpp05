#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool				is_signed;
	int const			grade_to_sign;
	int const			grade_to_execute;


public:
	std::string getName() const;
	bool		getSigned();
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void		beSigned(const Bureaucrat &bureocrat);
	class GradeTooHighException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "Form grade too high!";
		}
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const noexcept override {
			return "Form grade too low!";
		}
	};
};

std::ostream &operator<<(std::ostream &out, const Form &form);