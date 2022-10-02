#include <string>
#include <iostream>

int	main(void) {
	std :: string	str = "HI THIS IS BRAIN";
	std :: string	*stringPTR = &str;
	std :: string	&stringREF = str;

	std :: cout << "---------------VALUES----------------" << std :: endl;
	std :: cout << "ORIGINAL: " << str << std :: endl;
	std :: cout << "PTR: " << *stringPTR << std :: endl;
	std :: cout << "REF: " << stringREF << std :: endl;
	std :: cout << "---------ADRESSES OF MEMORY---------" << std :: endl;
	std :: cout << "ORIGINAL: " << &str << std :: endl;
	std :: cout << "PTR: " << stringPTR << std :: endl;
	std :: cout << "REF: " << &stringREF << std :: endl;
	return 0;
}