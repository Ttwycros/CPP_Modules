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
        void    _Add(void);
        void    _Search_wrapper(void) const;
        void    _Exit(void);
        bool    getState(void) const;
    private:
        Contact     contacts[8];
        int         mem_size;
        int         index;
        int         size;
        bool        state;
        void        show(int size) const;
        long long   num_check() const;
        void        _Search(void) const;
        void        _Show(void) const;
        void        _Show(int i) const;
};

#endif