#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    public:
        Contact(void);
        ~Contact(void);
        void    setFirtsName1(std :: string name);
        // void    setFirtsName (std :: istream& in);
        void    setLastName(std :: string last_name);
        void    setSecret(std :: string secret);
        void    setNick(std :: string nick);
        void    setNumber(long long num);
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