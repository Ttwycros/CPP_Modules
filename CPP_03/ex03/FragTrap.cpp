#include "FragTrap.hpp"

FragTrap :: FragTrap(void): ClapTrap("", 100, 100, 30)
{
	std :: cout << "FragTrap: Default constructor called" << std :: endl;
}

FragTrap :: FragTrap(std :: string _name): ClapTrap(_name, 100, 100, 30)
{
	std :: cout << "FragTrap: Initialisaion constructor called" << std :: endl;
}

FragTrap :: FragTrap(const FragTrap	&other) {
	std :: cout << "FragTrap: Copy constructor called" << std :: endl;
	*this = other;
}

FragTrap :: ~FragTrap(void) {
	std :: cout << "FragTrap: Destructor called" << std :: endl;
}

// FragTrap	&FragTrap :: operator=(const FragTrap	&other) {
// 	std :: cout << "FragTrap Assigment oerator called" << std :: endl;
// 	if (this != &other) {
// 		hitpoints = other.getHitpoints();
// 		energy = other.getEnergy();
// 		attackDamage = other.getAttacDamage();
// 		name = other.getName();
// 	}
// 	return (*this);
// }

void	FragTrap :: highFiveGuys(void) {
	std :: cout << "FragTrap: " << name << " HIGH FIVE Traps :)" << std :: endl;
}