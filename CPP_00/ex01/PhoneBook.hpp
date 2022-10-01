#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    _Add(int *index);
        void    _Search(void) const;
        void    _Search_wrapper(void) const;
        void    _Exit(void);
        void    _Show(void) const;
        int     getSize(void) const;
        bool    getState(void) const;
    private:
        Contact contacts[8];
        int     size;
        bool    state;
        void    show(int size) const;
        int     num_check() const;
};

#endif