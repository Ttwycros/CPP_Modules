#include "HumanB.hpp"

HumanB :: HumanB(std::string name)
{
    this->name = name;
    weapon = NULL;
}

HumanB :: ~HumanB(void){}

void HumanB :: setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}