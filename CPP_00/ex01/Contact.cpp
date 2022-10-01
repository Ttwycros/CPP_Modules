#include "Contact.hpp"

Contact :: Contact(void) {}
Contact :: ~Contact(void) {}

void Contact :: setFirtsName1 (std :: string name)
{
     Contact :: firstName = name;
}

// void Contact :: setFirtsName (std :: istream& in)
// {
//     getline(in, Contact :: firstName);
// }

void Contact :: setLastName (std :: string last_name)
{
    Contact :: lastName = last_name;
}

void Contact :: setSecret(std :: string secret)
{
    Contact :: darkestSecret = secret;
}
void Contact :: setNick(std :: string nick)
{
    Contact :: nickname = nick;
}
void Contact :: setNumber(long long num)
{
    Contact :: phoneNumber = num;
}

std :: string Contact :: getFirtsName (void) const
{
    return(firstName);
}

std :: string Contact :: getLastName (void) const
{
    return(lastName);
}

std :: string Contact :: getSecret (void) const
{
    return(darkestSecret);
}
std :: string Contact :: getNick (void) const
{
    return(nickname);
}
long long Contact :: getNumber (void) const
{
    return(phoneNumber);
}