#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap	&other);
		ScavTrap(std :: string _name);
		~ScavTrap(void);
		void		attack(std :: string const	&target);
		ScavTrap	&operator=(const ScavTrap	&other);
		void		guardGate(void);
};

#endif