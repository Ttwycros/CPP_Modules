#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl	karen;
	if (argc != 2) {
		std :: cerr << "Wrong number of arguments" << std :: endl;
		return 1;
	}
	karen.setComplainLvl((std :: string) argv[1]);
	std :: cout << "\033[0;33m--DEBUG LEVEL--\033[0;37m" << std :: endl;
	karen.complain("debug");
	std :: cout << "\033[0;33m--INFO LEVEL---\033[0;37m" << std :: endl;
	karen.complain("info");
	std :: cout << "\033[0;33m-WARNING LEVEL-\033[0;37m" << std :: endl;
	karen.complain("warning");
	std :: cout << "\033[0;33m--ERROR LEVEL--\033[0;37m" << std :: endl;
	karen.complain("error");
	std :: cout << "\033[0;33mNOT EXISTING LEVEL\033[0;37m" << std :: endl;
	karen.complain("I am not exist");
	return 0;
}