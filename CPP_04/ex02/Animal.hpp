#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal {
	public:
		virtual ~Animal(void);
		virtual Animal	&operator=(const Animal	&other);
		std :: string	getType(void) const;
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;
	protected:
		std :: string type;
};

#endif