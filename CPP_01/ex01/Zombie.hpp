#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie(void);
        void    setName(std::string name);
        void    announce( void ) const;
    private:
        std :: string   name;   
};

Zombie* zombieHorde( int N, std::string name );

#endif