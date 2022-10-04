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
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        std :: string _debub;
        std :: string _info;
        std :: string _warr;
        std :: string _err;
};

#endif