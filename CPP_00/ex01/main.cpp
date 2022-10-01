#include "PhoneBook.hpp"

int main(void) {
    PhoneBook   book;
    std :: string option;

    std :: cout << "Choose option" << std :: endl;
    while (book.getState()) {
        if (!(std :: cin >> option))
			break;
        else if (option == "EXIT" || option == "exit")
            book._Exit();
        else if (option == "ADD" || option == "add")
            book._Add();

        else if (option == "SEARCH" || option == "search")
            book._Search_wrapper();
        else {
            std :: cout << "Wrong option" << std :: endl;
            std :: cout << "Available: EXIT, SEARCH, ADD" << std :: endl;
        }
    }
    return 0;
}