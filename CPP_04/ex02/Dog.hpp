#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	public:
		Dog(void);
		Dog(const Dog	&other);
		~Dog(void);
		virtual Dog	&operator=(const Dog	&other);
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;
	private:
		Brain *brain;
};

#endif