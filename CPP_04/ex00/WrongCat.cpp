#include "WrongCat.hpp"

WrongCat :: WrongCat(void) {
	type = "WrongCat";
	std :: cout << "WrongCat: Default constructor called" << std :: endl;
}

WrongCat :: WrongCat(const WrongCat &other) : WrongAnimal(other) {
	*this = other;
	std :: cout << "WrongCat: Copy constructor called" << std :: endl;
}

WrongCat :: ~WrongCat(void) {
	std :: cout << "WrongCat: Destructor called" << std :: endl;
}

WrongCat	&WrongCat :: operator=(const WrongCat &other) {
	if (this != &other)
		type = other.getType();
	std :: cout << "WrongCat: Asignature operator called" << std :: endl;
	return *this;
}

void	WrongCat :: makeSound(void) const {
	std :: cout << "Meoooowwwww.... wrongyyyy" << std :: endl;
}