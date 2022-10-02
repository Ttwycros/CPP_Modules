#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon {
    public:
        Weapon(std::string type);
        Weapon();
        Weapon(const Weapon&);
        ~Weapon(void);
        const std :: string	&getType(void) const;
        void setType(std :: string type);
        Weapon &operator=(const Weapon& op);
    private:
        std :: string   _type;   
};

#endif