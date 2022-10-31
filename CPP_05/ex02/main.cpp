#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	{
		Bureaucrat	b("bob", 140);
		Form *sh = new ShrubberyCreationForm();
		b.executeForm(*sh);
		delete sh;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 15);
		Form *putin = new PresidentialPardonForm();
		b.executeForm(*putin);
		delete putin;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	b("bob", 60);
		Form *rob = new RobotomyRequestForm();
		b.executeForm(*rob);
		delete rob;
	}
	std :: cout << "------------------------------" << std :: endl;
	{
		Bureaucrat	a("Chel", 2);
		Bureaucrat	b("Nevelny", 1);
		Bureaucrat	c("Ryan Gosling", 2);

		Form	*brain_out = new RobotomyRequestForm("push_swap");
		a.executeForm(*brain_out);
		delete brain_out;
		Form	*tree = new ShrubberyCreationForm("Christmas");
		c.executeForm(*tree);
		delete tree;
		Form	*prosti = new PresidentialPardonForm("Russia");
		b.executeForm(*prosti);
		delete prosti;
	}
	return 0;
}
