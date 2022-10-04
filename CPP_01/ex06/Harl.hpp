#pragma once

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl {
    public:
        Harl();
        ~Harl();
        void    complain(std::string level);
        void    setComplainLvl(std :: string complain_lvl);
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        std :: string _debub;
        std :: string _info;
        std :: string _warr;
        std :: string _err;
        std :: string complain_lvl_threshold;
        std :: string _complainLevels[4];
};
//static const 
#endif