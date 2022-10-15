#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream> 

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(std :: string	_name);
		ClapTrap(const ClapTrap	&other);
		ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap	&other);
		void			attack(std :: string const	&target);
		void			takeDamage(unsigned int	amount);
		void			beRepaired(unsigned int amount);
		void			setDamage(unsigned int	amount);
		unsigned int	getHitpoints(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getAttacDamage(void) const;
		std :: string	getName(void) const;
	protected:
		unsigned int	hitpoints;
		unsigned int	energy;
		unsigned int	attackDamage;
		std :: string	name;
};

#endif