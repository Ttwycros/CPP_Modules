#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137) {
	std :: cout << "ShrubberyCreationForm: Default constructor called" << std :: endl;
}

ShrubberyCreationForm :: ShrubberyCreationForm(std :: string _target) : Form("ShrubberyCreationForm", 145, 137), target(_target) {
	std :: cout << "ShrubberyCreationForm: Initialisation constructor called" << std :: endl;
}

ShrubberyCreationForm :: ShrubberyCreationForm(const	ShrubberyCreationForm &other) {
	*this = other;
	std :: cout << "ShrubberyCreationForm: Copy constructor called" << std :: endl;
}

ShrubberyCreationForm :: ~ShrubberyCreationForm(void) {
	std :: cout << "ShrubberyCreationForm: Destructor called" << std :: endl;
}

ShrubberyCreationForm &ShrubberyCreationForm :: operator=(const ShrubberyCreationForm &other) {
	if (this != &other) {
		target = other.getTarget();
	}
	std :: cout << "ShrubberyCreationForm: Assignature operator called" << std :: endl;
	return *this;
}

std :: string const &ShrubberyCreationForm :: getTarget(void) const {
	return target;
}

const char *ShrubberyCreationForm :: FileNotOpened :: what(void) const throw() {
	return "Could not open a file";
}

void	ShrubberyCreationForm :: execute(Bureaucrat const &executor) const {
	if (this->getFlag())
		throw isSigned();
	if (executor.getGrade() > this->getGradeExec() || executor.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	std :: string filename = target + "_shrubbery";
	std :: ofstream file(filename);
	if (!file.is_open())
		throw FileNotOpened();
	file << "         |" << std :: endl;
	file << "        -+-" << std :: endl;
	file << "         |" << std :: endl;
	file << "        /=\\               /\\  /\\    ___  _ __  _ __ __    __" << std :: endl;
	file << "      i/ O \\i            /  \\/  \\  / _ \\| '__|| '__|\\ \\  / /" << std :: endl;
	file << "      /=====\\           / /\\  /\\ \\|  __/| |   | |    \\ \\/ /" << std :: endl;
	file << "      /  i  \\           \\ \\ \\/ / / \\___/|_|   |_|     \\  /" << std :: endl;
	file << "    i/ O * O \\i                                       / /" << std :: endl;
	file << "    /=========\\        __  __                        /_/    _" << std :: endl;
	file << "    /  *   *  \\        \\ \\/ /        /\\  /\\    __ _  ____  | |" << std :: endl;
	file << "  i/ O   i   O \\i       \\  /   __   /  \\/  \\  / _` |/ ___\\ |_|" << std :: endl;
	file << "  /=============\\       /  \\  |__| / /\\  /\\ \\| (_| |\\___ \\  _" << std :: endl;
	file << "  /  O   i   O  \\      /_/\\_\\      \\ \\ \\/ / / \\__,_|\\____/ |_|" << std :: endl;
	file << " i/ *   O   O   * \\i" << std :: endl;
	file << " /=================\\" << std :: endl;
	file << "	    |___|" << std :: endl;
	file.close();
}
