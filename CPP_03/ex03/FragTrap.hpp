#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp" 

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(const FragTrap	&other);
		FragTrap(std :: string _name);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap	&other);
		void		highFiveGuys(void);
};

#endif