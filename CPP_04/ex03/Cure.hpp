#pragma once

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"


class Cure: public Amateria
{
	protected:
	//something
	public:	
		Cure(std::string const & type);
		//something
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif