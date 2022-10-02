#include "HumanA.hpp"

HumanA :: HumanA(){}

HumanA::HumanA(std::string _name, Weapon _weapon) : name(_name)
{
    this->weapon = &_weapon;
}

HumanA :: ~HumanA(void){}

void	HumanA :: attack(void) const {
	if (weapon)
		std :: cout << name << " attacks with his " << weapon->getType() << std :: endl;
	else
		std :: cout << name << " cannot attack" << std :: endl;
}