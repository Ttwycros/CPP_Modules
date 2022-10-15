#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	First("First");
	ClapTrap	Second("Second");
	ClapTrap	Third;

	First.setDamage(5);
	Second.setDamage(7);
	First.attack("Second");
	Second.takeDamage(First.getAttacDamage());
	Second.attack("First");
	First.takeDamage(Second.getAttacDamage());
	Third = First;
	Third.takeDamage(10);
	Third.beRepaired(5);
	Second.beRepaired(12);
	return 0;
}