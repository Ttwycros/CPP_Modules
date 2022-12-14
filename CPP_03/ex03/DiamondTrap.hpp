#pragma once

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap	&other);
		DiamondTrap(std :: string _name);
		~DiamondTrap(void);
		void		attack(std :: string const	&target);
		DiamondTrap	&operator=(const DiamondTrap	&other);
		void 		whoAmI();
	private:
		std :: string	name;
		void		killYourSelf();
};

#endif