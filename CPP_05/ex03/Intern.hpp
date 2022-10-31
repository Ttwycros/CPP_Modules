#pragma once

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern &other);
		~Intern(void);
		Intern	&operator=(const Intern &other);
		Form	*makeForm(std :: string	formName, std :: string	targetName);
};

# endif