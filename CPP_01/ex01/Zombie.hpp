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
        // void    setFirtsNameStr(std :: string name);
        // void    setLastNameStr(std :: string last_name);
        // void    setSecretStr(std :: string secret);
        // void    setNickStr(std :: string nick);
        // void    setNumber(long long num);
        void    setName(std::string name);
        void    announce( void ) const;
        // void    setFirtsName (std :: istream& in);
        // std :: string   getFirtsName(void) const;
        // std :: string   getLastName(void) const;
        // std :: string   getSecret(void) const;
        // std :: string   getNick(void) const;
        // long long       getNumber(void) const;
    private:
        std :: string   name;
        // std :: string   lastName;
        // std :: string   darkestSecret;
        // std :: string  	nickname;
        // long long       phoneNumber;     
};

Zombie* zombieHorde( int N, std::string name );

#endif