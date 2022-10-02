#include "HumanB.hpp"

HumanB :: HumanB(std :: string _name) : name(_name), weapon(NULL) {}

HumanB :: ~HumanB(void){}

void HumanB :: setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void	HumanB :: attack(void) const {
	if (weapon)
		std :: cout << name << " attacks with his " << weapon->getType() << std :: endl;
	else
		std :: cout << name << " cannot attack" << std :: endl;
}