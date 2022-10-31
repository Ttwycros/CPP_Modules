#pragma once

#ifndef FORM_CPP
# define FORM_CPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(void);
		Form(const Form &other);
		Form(std :: string _name, int gradeSign, int GradeExec);
		~Form(void);
		Form &operator=(const Form &other);
		std :: string const &getName(void) const;
		int					getGradeSign(void) const;
		int					getGradeExec(void) const;
		bool				getFlag(void) const;
		void				beSigned(const Bureaucrat	&b);
		class GradeTooLowException : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooHighException : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
		class isSigned : public std :: exception {
			public:
				virtual const char* what(void) const throw();
		};
	private:
		bool					flag;
		const std :: string 	name;
		const int				gradeSign;
		const int				gradeExec;
		
};

std :: ostream	&operator<<(std :: ostream &stream, const Form &other);

#endif
