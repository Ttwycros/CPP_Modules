#include "Harl.hpp"

Harl :: Harl()
{
	_debub = "I love to get static functions call";
	_info = "I cannot believe you didn't add static methods!";
	_warr = "I think I deserve static methods called. I was told it's a necessity!";
	_err = "This is unacceptable, I will not stand that. I want my static methods now.";
}

Harl :: ~Harl(void){}

/*static*/ void	Harl :: debug(void)
{
	std :: cout << _debub << std :: endl;
}

/*static*/ void	Harl :: info(void)
{
	std :: cout << _info << std :: endl;
}

/*static*/ void	Harl :: warning(void)
{ 
	std :: cout << _warr << std :: endl;
}

/*static*/ void	Harl :: error(void)
{
	std :: cout << _err << std :: endl;
}


/*Yes, i know you can made all of this functions intance methods, but i wanted to try static methods approach.*/
void	Harl :: complain(std :: string level) {
	std :: string complainLevels[] = {"debug", "info", "warning", "error"};
	void	(Harl :: *forComlain[])(void) = {
		&Harl :: debug,
		&Harl :: info, //can do either way
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
			(this->*forComlain[i])();
	}
}