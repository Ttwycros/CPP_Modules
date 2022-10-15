#include "ScavTrap.hpp"

int	main(void) {
	{
		ScavTrap scav("Scav");
		ScavTrap anotherScav;

		scav.guardGate();
		scav.attack("Clap");
		scav.takeDamage(25);
		std :: cout << scav.getHitpoints() << std :: endl;
		scav.beRepaired(3);
		anotherScav = scav;
		anotherScav.takeDamage(30);
		std :: cout << anotherScav.getHitpoints() << std :: endl;
		anotherScav.beRepaired(5);
	}
	std :: cout << "------------------------------------------" << std ::endl;
	{
		ClapTrap clap("Clap");

		clap.attack("enemy");
		clap.takeDamage(9);
		clap.beRepaired(1);
		clap.takeDamage(10);
		clap.beRepaired(2);
	}
	return 0;
}