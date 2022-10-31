#include "Bureaucrat.hpp"

int main(void) {
	{
		try {
			Bureaucrat b("bob", 0);
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-------------------------" << std :: endl;
	{
		try {
			Bureaucrat a("alice", 156);
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-------------------------" << std :: endl;
	{
		try {
			Bureaucrat b("bob", 1);
			std :: cout << b;
			b.incGrade();
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
	std :: cout << "-------------------------" << std :: endl;
	{
		try {
			Bureaucrat a("alice", 150);
			std :: cout << a;
			a.decGrade();
		}
		catch (std :: exception &e) {
			std :: cout << e.what() << std :: endl;
		}
	}
}
