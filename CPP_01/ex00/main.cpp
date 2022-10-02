#include "Zombie.hpp"

int main(void) {
	Zombie	*Misha, *Liza;

	Misha = newZombie("Misha");
	Misha->announce();
	delete Misha;
	Liza = newZombie("Liza");
	Liza->announce();
	delete Liza;
	randomChump("Nadia");
	randomChump("Sasha");
	return 0;
}