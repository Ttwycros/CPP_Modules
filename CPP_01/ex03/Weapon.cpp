#include "Weapon.hpp"

Weapon :: Weapon(){}

Weapon :: Weapon(std :: string type)
{
    this->_type = type;
}

Weapon :: Weapon(const Weapon& copy)
:
    _type(copy._type)
{}

Weapon :: ~Weapon(void) {}

void Weapon :: setType(std :: string type)
{
    if (_type != "")
        this->_type = type;
}


const std :: string	&Weapon :: getType(void) const
{
    return this->_type;
}