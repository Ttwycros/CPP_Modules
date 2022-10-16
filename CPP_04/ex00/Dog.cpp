#include "Dog.hpp"

Dog :: Dog(void) {
	type = "Dog";
	std :: cout << "Dog: Default constructor called" << std :: endl;
}

Dog :: Dog(const Dog &other) : Animal(other) {
	*this = other;
	std :: cout << "Dog: Copy constructor called" << std :: endl;
}

Dog :: ~Dog(void) {
	std :: cout << "Dog: Destructor called" << std :: endl;
}

Dog	&Dog :: operator=(const Dog &other) {
	if (this != &other)
		type = other.getType();
	std :: cout << "Dog: Asignature operator called" << std :: endl;
	return *this;
}

void	Dog :: makeSound(void) const {
	std :: cout << "The dogs are more frendly in general, but watch you back, you\'ll never know what the dog i am...." << std :: endl;
}