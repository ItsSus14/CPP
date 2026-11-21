#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() :	ClapTrap("unknown_clap_name"), 
				FragTrap(),
				ScavTrap(),
				name("unknown")
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap(const std::string &name) :	ClapTrap(name + "_clap_name"),
							FragTrap(name),
							ScavTrap(name),
							name(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) :	ClapTrap(other), 
							FragTrap(other), 
							ScavTrap(other), 
							name(other.name)
{
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl; 
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other)
{
	if(this != &other)
	{
		ClapTrap::operator=(other);
		name = other.name;
	}
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
