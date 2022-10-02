#pragma once

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon &_weapon);
        // HumanA();
        ~HumanA(void);
        void    setName(std::string name);
        void    attack( void ) const;
    private:
        std :: string   name;
        Weapon &weapon;   
};

#endif