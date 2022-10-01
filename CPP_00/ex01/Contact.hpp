#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
// # include <iostream>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        void    setFirtsNameStr(std :: string name);
        void    setLastNameStr(std :: string last_name);
        void    setSecretStr(std :: string secret);
        void    setNickStr(std :: string nick);
        void    setNumber(long long num);
        // void    setFirtsName (std :: istream& in);
        std :: string   getFirtsName(void) const;
        std :: string   getLastName(void) const;
        std :: string   getSecret(void) const;
        std :: string   getNick(void) const;
        long long       getNumber(void) const;
    private:
        std :: string   firstName;
        std :: string   lastName;
        std :: string   darkestSecret;
        std :: string  	nickname;
        long long       phoneNumber;     
};

#endif