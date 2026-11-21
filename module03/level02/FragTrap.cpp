#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap("Unknown")
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;	
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{	
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
	if(this != &other)
		ClapTrap::operator=(other);

	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name
			<< " requests a positive high five!" << std::endl;
}
