#include "Cat.hpp"

Cat :: Cat(void) {
	type = "Cat";
	std :: cout << "Cat: Default constructor called" << std :: endl;
}

Cat :: Cat(const Cat &other) : Animal(other) {
	*this = other;
	std :: cout << "Cat: Copy constructor called" << std :: endl;
}

Cat :: ~Cat(void) {
	std :: cout << "Cat: Destructor called" << std :: endl;
}

// Cat	&Cat :: operator=(const Cat &other) {
// 	if (this != &other)
// 		type = other.getType();
// 	std :: cout << "Cat: Asignature operator called" << std :: endl;
// 	return *this;
// }

void	Cat :: makeSound(void) const {
	std :: cout << "What are you looking at, huh? I'm a cat...." << std :: endl;
}