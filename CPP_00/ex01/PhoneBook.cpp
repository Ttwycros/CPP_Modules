#include "PhoneBook.hpp"

PhoneBook :: PhoneBook(void) {
    size = 0;
    state = true;
}
PhoneBook :: ~PhoneBook(void) {}

void    PhoneBook :: _Exit(void)
{
    std :: cout << "Done exit" << std :: endl;
    state = false;
}

int PhoneBook :: num_check() const
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
        {std :: cout << "fuck you little bastard, try again" << std :: endl;}
    }
}


void PhoneBook ::_Add(int *index)
{
    std :: string   name, last, secret, nick, n;
    int number;
    if (*index == 8)
        *index = 0;
    if (size == 8)
        size = 0;
    std :: cout << "First name: ";
    // contacts[*index].setFirtsName(std :: cin);
    std :: cin >> name;
    contacts[*index].setFirtsName1(name);
    std :: cout << "Last Name: ";
    std :: cin >> last;
    contacts[*index].setLastName(last);
    std :: cout << "Phone number: ";
    // std :: cin >> n;
    // contacts[*index].setNumber(std :: stol(n));
    contacts[*index].setNumber(this->num_check());
    std :: cout << "Nickname: ";
    std :: cin >> nick;
    contacts[*index].setNick(nick);
    std :: cout << "darkest Secret: ";
	std :: cin >> secret;
    contacts[*index].setSecret(secret);
    (*index)++;
    size++;
    std :: cout << "Contact added" << std :: endl;
}

int PhoneBook :: getSize(void) const{
    return (size);
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

static std :: string	makeTemp(std :: string object) {
	std :: string temp(object);

	if (temp.size() > 10) {
		temp.insert(9, ".");
		temp = temp.substr(0, 10);
	}
	return temp;
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
        // << " | " << std :: setw(10) << makeTemp(contacts[i].getFirtsName())
        // << " | " << std :: setw(10) << makeTemp(contacts[i].getLastName())
        // << " | " << std :: setw(10) << makeTemp(contacts[i].getNick())
        << " | " << std :: setw(10) << contacts[i].getFirtsName().substr(0, 10)
        << " | " << std :: setw(10) << contacts[i].getLastName().substr(0, 10)
        << " | " << std :: setw(10) << contacts[i].getNick().substr(0, 10)
        << " |" << std :: endl;
    }
}

void    PhoneBook :: _Search_wrapper(void) const {
    int 			index;
	std :: string	i;

    // if (size > 8)
    //     size = 8;
    this->_Search();
    if (!size)
        return ;
    std :: cout << "Index to seacrh :";
    std :: cin >> i;
	index = std :: stol(i);
    if (index < 1 || index > size) {
        std :: cout << "No such contact" << std :: endl;
        return ;
    }
    std :: cout << "First name: " << contacts[index - 1].getFirtsName() << std :: endl;
    std :: cout << "Last name: " << contacts[index - 1].getLastName() << std :: endl;
    std :: cout << "Nickname: " << contacts[index - 1].getNick() << std :: endl;
    std :: cout << "Phone number: " << contacts[index - 1].getNumber() << std :: endl;
    std :: cout << "Darkest Secret: " << contacts[index - 1].getSecret() << std :: endl;
}