#include "Form.hpp"

int main(void) {
	{
		try {
			Form	f("boris", 0, 5);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout  << "---------------------------" << std :: endl;
	{
		try {
			Form	f("boris", 100, 189);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout  << "---------------------------" << std :: endl;
	{
		try {
			Form	f("boris", 100, 109);
			std :: cout << f;
			Bureaucrat b("guy", 105);
			std :: cout << b;
			f.beSigned(b);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout  << "---------------------------" << std :: endl;
	{
		try {
			Form	f("boris", 100, 109);
			std :: cout << f;
			Bureaucrat b("guy", 99);
			std :: cout << b;
			f.beSigned(b);
			f.beSigned(b);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout  << "---------------------------" << std :: endl;
	{
		try {
			Form	f("leo", 100, 109);
			std :: cout << f;
			Bureaucrat b("bor", 101);
			std :: cout << b;
			b.signForm(f);
			b.incGrade();
			std :: cout << b;
			b.signForm(f);
		}
		catch (std :: exception &e){
			std :: cout << e.what() << std :: endl;
		}
	}
}
