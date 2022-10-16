#include "Cat.hpp"

Cat :: Cat(void): brain(new Brain()){
	type = "Cat";
	std :: cout << "Cat: Default constructor called" << std :: endl;
}

Cat :: Cat(const Cat &other) : Animal(other) {
	*this = other;
	std :: cout << "Cat: Copy constructor called" << std :: endl;
}

Cat :: ~Cat(void) {
	delete brain;
	std :: cout << "Cat: Destructor called" << std :: endl;
}

Cat	&Cat :: operator=(const Cat &other) {
	if (this != &other)
		*brain = *other.getBrain();
		type = other.getType();
	std :: cout << "Cat: Asignature operator called" << std :: endl;
	return *this;
}

void	Cat :: makeSound(void) const {
	std :: cout << "What are you looking at, huh? I'm a cat...." << std :: endl;
}

Brain	*Cat :: getBrain(void) const {
	return brain;
}