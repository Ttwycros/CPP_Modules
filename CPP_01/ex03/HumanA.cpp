#include "HumanA.hpp"

// HumanA :: HumanA(){}

HumanA :: HumanA(std::string name, Weapon &_weapon)
{
    this->name = name;
    this->weapon = _weapon;
}

HumanA :: ~HumanA(void){}

void    HumanA :: setName(std::string name)
{

}