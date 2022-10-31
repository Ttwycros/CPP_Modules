#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45) {
	std :: cout << "RobotomyRequestForm: Default constructor called" << std :: endl;
}

RobotomyRequestForm :: RobotomyRequestForm(std :: string _target) : Form("RobotomyRequestForm", 72, 45), target(_target) {
	std :: cout << "RobotomyRequestForm: Initialisation constructor called" << std :: endl;
}

RobotomyRequestForm :: RobotomyRequestForm(const	RobotomyRequestForm &other) {
	*this = other;
	std :: cout << "PresidentialPardonForm: Copy constructor called" << std :: endl;
}

RobotomyRequestForm :: ~RobotomyRequestForm(void) {
	std :: cout << "RobotomyRequestForm: Destructor called" << std :: endl;
}

RobotomyRequestForm &RobotomyRequestForm :: operator=(const RobotomyRequestForm &other) {
	if (this != &other) {
		target = other.getTarget();
	}
	std :: cout << "RobotomyRequestForm: Assignature operator called" << std :: endl;
	return *this;
}

std :: string const &RobotomyRequestForm :: getTarget(void) const {
	return target;
}

void	RobotomyRequestForm :: execute(Bureaucrat const &executor) const {
	if (this->getFlag())
		throw isSigned();
	if (executor.getGrade() > this->getGradeExec() || executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	std :: cout << "* Making some drilling noise *" << std :: endl;
	if (executor.getGrade() % 2)
		std :: cout << target << " has been robotomized successfully 50'%' of the time" << std :: endl;
	else
		std :: cout << target << " has been robotomized with failure" << std :: endl;
}
