#include "Zombie.hpp"

Zombie :: Zombie(){}

Zombie :: Zombie(std::string name)
{
    this->name = name;
}

Zombie :: ~Zombie(void)
{
    std :: cout << name << " is dead" << std :: endl;
}

void  Zombie :: announce( void ) const
{
    std :: cout << name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}

void  Zombie :: setName(std::string name)
{
    this->name = name;
}