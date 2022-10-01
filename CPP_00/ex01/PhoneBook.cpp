#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void) {
    size = 0;
    index = 0;
    state = true;
    mem_size = 8;
}
PhoneBook :: ~PhoneBook(void) {}

void    PhoneBook :: _Exit(void)
{
    std :: cout << "Done exit" << std :: endl;
    state = false;
}

long long PhoneBook :: num_check() const
{
    int number;
    std :: string n;
    while (true)
    {
        std :: cin >> n;
        try {
            number = std :: stol(n);
            return number;
        }
        catch (const std::invalid_argument&)
        {std :: cout << "not a number, try again" << std :: endl;}
        catch (const std::out_of_range&)
        {std :: cout << "out of range, try again" << std :: endl;}
    }
}


void PhoneBook ::_Add()
{
    std :: string   name, last, secret, nick;
    if (index == mem_size)
        index = 0;
    std :: cout << "First name: ";
    std :: cin >> name;
    contacts[index].setFirtsNameStr(name);
    std :: cout << "Last Name: ";
    std :: cin >> last;
    contacts[index].setLastNameStr(last);
    std :: cout << "Phone number: ";
    contacts[index].setNumber(this->num_check());
    std :: cout << "Nickname: ";
    std :: cin >> nick;
    contacts[index].setNickStr(nick);
    std :: cout << "darkest Secret: ";
	std :: cin >> secret;
    contacts[index].setSecretStr(secret);
    index++;
    if (size < mem_size)
        size++;
    std :: cout << "Contact added" << std :: endl;
}

bool PhoneBook :: getState(void) const{
    return (state);
}

void PhoneBook :: _Show(void) const{
    for (int i = 0; i < size; i++)
    {
        std :: cout << "i =" << i << std :: endl;
        std :: cout << contacts[i].getFirtsName() << std :: endl;
        std :: cout << contacts[i].getLastName() << std :: endl;
        std :: cout << contacts[i].getSecret() << std :: endl;
        std :: cout << contacts[i].getNick() << std :: endl;
        std :: cout << contacts[i].getNumber() << std :: endl;
    }
}

void PhoneBook :: _Show(int i) const{

    std :: cout << "First name: " << contacts[i].getFirtsName() << std :: endl;
    std :: cout << "Last name: " << contacts[i].getLastName() << std :: endl;
    std :: cout << "Nickname: " << contacts[i].getNick() << std :: endl;
    std :: cout << "Phone number: " << contacts[i].getNumber() << std :: endl;
    std :: cout << "Darkest Secret: " << contacts[i].getSecret() << std :: endl;
}

void    PhoneBook :: _Search(void) const {
    if (!size) {
        std :: cout << "No contacts in phone book" << std :: endl;
        return ;
    }
    std :: cout << "| " << std :: setw(10) << "index" 
        << " | " << std :: setw(10) << "first name"
        << " | " << std :: setw(10) << "last name"
        << " | " << std :: setw(10) << "nickname"
        << " |" << std :: endl;
    for (int i = 0; i < size; i++) {
        std :: cout << "| " << std :: setw(10) << i + 1
        << " | " << std :: setw(10) << contacts[i].getFirtsName().substr(0, 10)
        << " | " << std :: setw(10) << contacts[i].getLastName().substr(0, 10)
        << " | " << std :: setw(10) << contacts[i].getNick().substr(0, 10)
        << " |" << std :: endl;
    }
}

void    PhoneBook :: _Search_wrapper(void) const {
    int 			in;
	std :: string	i;

    this->_Search();
    if (!size)
        return ;
    std :: cout << "Index to seacrh :";
	in = this->num_check();
    if (in <= 0 || in > size) {
        std :: cout << "No such contact" << std :: endl;
        return ;
    }
    this->_Show(index-1);
}
