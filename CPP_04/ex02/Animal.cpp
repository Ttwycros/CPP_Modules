#include "Animal.hpp"

Animal :: ~Animal(void) {
	std :: cout << "Animal: Destructor called" << std :: endl;
}

std :: string	Animal :: getType(void) const {
	return type;
}