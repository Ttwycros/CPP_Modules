#include "Harl.hpp"

int main(void) {
	std :: cout << "\033[0;33m--DEBUG LEVEL--\033[0;37m" << std :: endl;
	Harl :: complain("debug");
	std :: cout << "\033[0;33m--INFO LEVEL---\033[0;37m" << std :: endl;
	Harl :: complain("info");
	std :: cout << "\033[0;33m-WARNING LEVEL-\033[0;37m" << std :: endl;
	Harl :: complain("warning");
	std :: cout << "\033[0;33m--ERROR LEVEL--\033[0;37m" << std :: endl;
	Harl :: complain("error");
	std :: cout << "\033[0;33mNOT EXISTING LEVEL\033[0;37m" << std :: endl;
	Harl :: complain("I am not exist");
	return 0;
}