#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) {
	std :: cout << "PresidentialPardonForm: Default constructor called" << std :: endl;
}

PresidentialPardonForm :: PresidentialPardonForm(std :: string _target) : Form("PresidentialPardonForm", 25, 5), target(_target) {
	std :: cout << "PresidentialPardonForm: Initialisation constructor called" << std :: endl;
}

PresidentialPardonForm :: PresidentialPardonForm(const	PresidentialPardonForm &other) {
	*this = other;
	std :: cout << "PresidentialPardonForm: Copy constructor called" << std :: endl;
}

PresidentialPardonForm :: ~PresidentialPardonForm(void) {
	std :: cout << "PresidentialPardonForm: Destructor called" << std :: endl;
}

PresidentialPardonForm &PresidentialPardonForm :: operator=(const PresidentialPardonForm &other) {
	if (this != &other) {
		target = other.getTarget();
	}
	std :: cout << "PresidentialPardonForm: Assignature operator called" << std :: endl;
	return *this;
}

std :: string const &PresidentialPardonForm :: getTarget(void) const {
	return target;
}

void	PresidentialPardonForm :: execute(Bureaucrat const &executor) const {
	if (this->getFlag())
		throw isSigned();
	if (executor.getGrade() > this->getGradeExec() || executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	std :: cout << target << " has been pardoned by Zafod Beeblebrox" << std :: endl;
}
