#include "Intern.hpp"

Intern :: Intern(const Intern &other) {(void) other;}
Intern	&Intern :: operator=(const Intern	&other) {
	(void) other; 
	return *this;
}

Intern :: Intern(void) {
	std :: cout << "Intern: Default constructor called" << std :: endl;
}

Intern :: ~Intern(void) {
	std :: cout << "Intern: Destructor called" << std :: endl;
}

Form	*robot(std :: string target) {
	return new RobotomyRequestForm(target);
}

Form	*president(std :: string target) {
	return new PresidentialPardonForm(target);
}

Form	*tree(std :: string target) {
	return new ShrubberyCreationForm(target);
}

Form	*Intern :: makeForm(std :: string formName, std :: string target) {
	static Form	*(*array[3])(std :: string) = { robot, president, tree };
	std :: string names[3] = { "RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm" };
	int i;

	for (i = 0; i < 3 && formName != names[i]; i++);
	switch (i) {
		case 3:
			std :: cerr << "No such form name" << std :: endl;
			return NULL;
		default:
			std :: cout << "Intern create " << formName << std :: endl; 
			return (*array[i])(target);
	}
}
