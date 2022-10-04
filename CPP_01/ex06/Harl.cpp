#include "Harl.hpp"

Harl :: Harl()
{
	// std :: string Foo_Msg_data[] = {"debug", "info", "warning", "error"};
	_complainLevels[0] = "debug";
	_complainLevels[1] = "info";
	_complainLevels[2] = "warning";
	_complainLevels[3] = "error";

	_debub = "I love to get static functions call";
	_info = "I cannot believe you didn't add static methods!";
	_warr = "I think I deserve static methods called. I was told it's a necessity!";
	_err = "This is unacceptable, I will not stand that. I want my static methods now.";
}

Harl :: ~Harl(void){}

void	Harl :: debug(void){std :: cout << _debub << std :: endl;}
void	Harl :: info(void){std :: cout << _info << std :: endl;}
void	Harl :: warning(void){ std :: cout << _warr << std :: endl;}
void	Harl :: error(void){std :: cout << _err << std :: endl;}


void Harl :: setComplainLvl(std :: string complain_lvl)
{
	int i = 0;
	for (; i < 4 && this->_complainLevels[i] != complain_lvl; i++);
	switch (i) {
		case 4:
			std :: cerr << "[ Probably complaining about insignificant problems ]" << std :: endl;
			this->complain_lvl_threshold = "silence";
			break ;
		default:
			this->complain_lvl_threshold = complain_lvl;
	}
}

void	Harl :: complain(std :: string level) {
	void	(Harl :: *forComlain[])(void) = {
		&Harl :: debug,
		&Harl :: info,
		&Harl :: warning,
		&Harl :: error
	};
	int i = 0;
	int size = (sizeof(forComlain)/sizeof(*forComlain));
	for (; i < size && this->_complainLevels[i] != this->complain_lvl_threshold; i++);
	for (; i < size && this->_complainLevels[i] != level; i++);
	switch (i) {
		case 4:
			break ;
		default:
			(this->*forComlain[i])();
	}
}