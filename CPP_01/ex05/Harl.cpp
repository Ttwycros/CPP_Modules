#include "Harl.hpp"

// HumanA :: HumanA(){}
// HumanA :: ~HumanA(void){}

/*static*/ void	Harl :: debug(void)
{
	std :: cout << "I love to get static functions call" << std :: endl;
}

/*static*/ void	Harl :: info(void)
{
	std :: cout << "I cannot believe you didn't add instanse methods!" << std :: endl;
}

/*static*/ void	Harl :: warning(void)
{ 
	std :: cout << "I think I deserve instance methods called. I was told it's a necessity!" << std :: endl;
}

/*static*/ void	Harl :: error(void)
{
	std :: cout << "This is unacceptable, I will not stand that. I want my instance methods now." << std :: endl;
}


/*Yes, i know you can made all of this functions intance methods, but i wanted to try static methods approach.*/
void	Harl :: complain(std :: string level) {
	std :: string complainLevels[] = {"debug", "info", "warning", "error"};
	void	(*forComlain[])(void) = {
		&debug,
		&info, //can do either way
		&Harl :: warning,
		&Harl :: error
	};
	int i = 0;
	int size = (sizeof(forComlain)/sizeof(*forComlain));
	for (; i < size && complainLevels[i] != level; i++);
	switch (i) {
		case 4:
			std :: cerr << "No such level" << std :: endl;
			break ;
		default:
			(*forComlain[i])();
	}
}