#include "ClapTrap.hpp"

ClapTrap :: ClapTrap(void) : hitpoints(10), energy(10), attackDamage(0)
{
	std :: cout << "ClapTrap: Default constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(std :: string _name) : hitpoints(10), energy(10), attackDamage(0), name(_name)
{
	std :: cout << "ClapTrap: Initialisaion constructor called" << std :: endl;
}

ClapTrap :: ClapTrap(const ClapTrap	&other)
{
	std :: cout << "ClapTrap: Copy constructor called" << std :: endl;
	*this = other;
}

ClapTrap :: ~ClapTrap(void)
{
	std :: cout << "ClapTrap: Destructor called" << std :: endl;
}

ClapTrap	&ClapTrap :: operator=(const ClapTrap	&other)
{
	std :: cout << "Clap Trap Assigment oerator called" << std :: endl;
	if (this != &other) {
		hitpoints = other.getHitpoints();
		energy = other.getEnergy();
		attackDamage = other.getAttacDamage();
		name = getName();
	}
	return (*this);
}

unsigned int	ClapTrap :: getHitpoints(void) const
{
	return hitpoints;
}

unsigned int	ClapTrap :: getEnergy(void) const
{
	return energy;
}

unsigned int	ClapTrap :: getAttacDamage(void) const
{
	return attackDamage;
}

std :: string ClapTrap :: getName(void) const
{
	return name;
}

void	ClapTrap :: attack(std :: string const	&target)
{
	if (energy == 0)
	{
		std :: cout << "i'm dead, remember?" << std :: endl;
	}
	else
	{
		std :: cout << "Clap Trap " << name << " attack " << target
			<< ", causing " << attackDamage << " points of damage" << std :: endl;
		energy--;
	}
}

void	ClapTrap :: setDamage(unsigned int amount)
{
	attackDamage = amount;
}

void	ClapTrap :: takeDamage(unsigned int	amount)
{
	if (energy == 0)
	{
		std :: cout << "i'm dead, remember?" << std :: endl;
	}
	else
	{
		if (amount >= hitpoints)
		{
			std :: cout << "ClapTrap: " << name << ": Oh, no... " << amount
				<< " points of damage, but i only had " << hitpoints
				<< " hitpoints, I\'m dead" << std :: endl;
			hitpoints = 0;
			energy = 0;
		}
		else
		{
			std :: cout << "ClapTrap: " << name << ": recieved " << amount
				<< " points of damage, but i had " << hitpoints
				<< " hitpoints, so i\'m good" << std :: endl;
			hitpoints -= amount;
		}
	}
}

void	ClapTrap :: beRepaired(unsigned int amount)
{
	if (hitpoints == 0)
		std :: cout << "ClapTrap: " << name << ": I am dead and you are not God to bring me back to life" << std :: endl;
	else {
		hitpoints += amount;
		std :: cout << "ClapTrap: " << name << ": Thanks for this gift :) You gave me " << amount << " h.p and now I have "
			<< hitpoints << " hitpoints" << std :: endl;
		energy--;
	}
}