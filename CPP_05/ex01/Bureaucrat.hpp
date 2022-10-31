#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(void);
		Bureaucrat(std :: string _name, int _grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);
		Bureaucrat &operator=(const Bureaucrat &other);
		std :: string const	&getName(void) const;
		int					getGrade(void) const;
		void				incGrade(void);
		void				decGrade(void);
		void				signForm(Form	&f) const;
		class GradeTooLowException : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooHighException : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
	private:
		void	checkGrade(void) const;
		std :: string const	name;
		int					grade;
};

std :: ostream	&operator<<(std :: ostream &stream, const Bureaucrat &other);

#endif
