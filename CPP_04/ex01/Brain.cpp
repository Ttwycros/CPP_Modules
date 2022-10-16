#include "Brain.hpp"

Brain :: Brain(void) {
	std :: cout << "Brain: Default constructor called" << std :: endl;
}

Brain :: Brain(const Brain &other) {
	*this = other;
	std :: cout << "Brain: Copy constructor called" << std :: endl;
}

Brain :: ~Brain(void) {
	std :: cout << "Brain: Destructor called" << std :: endl;
}

Brain	&Brain :: operator=(const Brain	&other) {
	std :: cout << "Brain: Asignature operator called" << std :: endl;
	if (this != &other)
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	return *this;
}

std::string const &Brain :: getIdea(int index) const
{
	return this->ideas[index];
}