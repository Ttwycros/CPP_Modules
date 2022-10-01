#include "PhoneBook.hpp"

int main(void) {
    PhoneBook   book;
    std :: string option;
    bool flag = true;
    int i = 0, size = 0;

    std :: cout << "Choose option" << std :: endl;
    while (book.getState()) {
        if (!(std :: cin >> option))
			flag = false;
        else if (option == "EXIT") {
            book._Exit();
        }
        else if (option == "ADD") {
            book._Add(&i);
            if (size < i)
                size = i;
        }
        else if (option == "SEARCH")
            book._Search_wrapper();
        else {
            std :: cout << "Wrong option" << std :: endl;
            std :: cout << "Available: EXIT, SEARCH, ADD" << std :: endl;
        }
    }
    return 0;
}