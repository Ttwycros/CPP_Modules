#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	public:
		Cat(void);
		Cat(const Cat	&other);
		~Cat(void);
		virtual Animal	&operator=(const Animal	&other);
		Cat	&operator=(const Cat	&other);
		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;
	private:
		Brain *brain;
};

#endif