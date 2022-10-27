#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(void): ClapTrap("", 100, 50, 20)
{
	std :: cout << "ScavTrap: Default constructor called" << std :: endl;
}

ScavTrap :: ScavTrap(std :: string _name): ClapTrap(_name, 100, 50, 20)
{
	std :: cout << "ScavTrap: Initialisaion constructor called" << std :: endl;
}

ScavTrap :: ScavTrap(const ScavTrap	&other)
{
	std :: cout << "ScavTrap: Copy constructor called" << std :: endl;
	*this = other;
}

ScavTrap :: ~ScavTrap(void)
{
	std :: cout << "ScavTrap: Destructor called" << std :: endl;
}

ScavTrap	&ScavTrap :: operator=(const ScavTrap	&other) {
	std :: cout << "ScavTrap Assigment oerator called" << std :: endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		// hitpoints = other.getHitpoints();
		// energy = other.getEnergy();
		// attackDamage = other.getAttacDamage();
		// name = other.getName();
	}
	return (*this);
}

void	ScavTrap :: attack(std :: string const	&target)
{ 
	std :: cout << "ScavTrap " << name << " attack " << target
		<< ", causing " << hitpoints << " points of damage" << std :: endl;
}

void	ScavTrap :: guardGate(void) {
	std :: cout << "ScavTrap: " << name << " have enetered in Gate keeper mode" << std :: endl;
}