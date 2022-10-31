#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std :: string _target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm			&operator=(const ShrubberyCreationForm &other);
		virtual std :: string const 	&getTarget(void) const;
		virtual void					execute(Bureaucrat const &executor) const;
		class FileNotOpened : public std :: exception {
			public:
				virtual const char	*what(void) const throw();
		};
	private:
		std :: string target;	
};

#endif
