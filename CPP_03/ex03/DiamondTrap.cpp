#include "DiamondTrap.hpp"

DiamondTrap :: DiamondTrap(void)
{
	ClapTrap::name += "_clap_name";
	hitpoints = FragTrap::hitpoints;
	energy = ScavTrap::energy;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap :: DiamondTrap(const DiamondTrap &other)
{
	*this = other;
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
}

DiamondTrap :: DiamondTrap(std :: string	_name): ClapTrap(_name), FragTrap(), ScavTrap(), name(_name)
{
	ClapTrap::name += "_clap_name";
	DiamondTrap::hitpoints = FragTrap::hitpoints;
	energy = ScavTrap:: energy;
	DiamondTrap::attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: Initialisation constructor called" << std::endl;
}

DiamondTrap:: ~DiamondTrap(void)
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap :: operator=(const DiamondTrap	&other)
{
	std::cout << "DiamondTrap Assigment oerator called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		name = other.name;
	}
	return (*this);
}

void	DiamondTrap :: attack(std :: string const	&target)
{
	ScavTrap :: attack(target);
}

void	DiamondTrap :: whoAmI(void)
{
	std :: cout  << "DiamondTrap: My name is " << name << ", My grandfather\'s name is "
		<< ClapTrap::name << std :: endl;
}

void	DiamondTrap :: killYourSelf(void)
{
	std :: cout  << "DiamondTrap: Well, you ordered it, be prepared for malloc errors " << name << "is dead, and my grandfather "
		<< ClapTrap::name << " is also dead "<< std :: endl;
	delete this;
}