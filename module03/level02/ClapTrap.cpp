#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : name("Unknown"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor with no parameters called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor with parameters called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;	
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called"  << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	if(this == &other)
		return (*this);
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}
void	ClapTrap::attack(const std::string &target)
{
	if (hitPoints == 0)
	{
		std::cout << "ClapTrap " << name << " is unable to attack: no hit points left!" << std::endl;
		return ;
	}
	if(energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points left and cannot attack!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if(amount >= hitPoints)
	{
		hitPoints  = 0;
		std::cout << name << " has been destroyed!" << std::endl;
		return ;
	}
	hitPoints -= amount;
	std::cout << name << " takes " << amount << " of damage, health point remained =	"<< hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints == 0)
	{
		std::cout << name << " is unable to repair: no hit points left!" << std::endl;
		return ;
	}
	if (energyPoints == 0)
	{
		std::cout <<  name << " is unable to repair: no energy points left!" << std::endl;
		return ;
	}
	hitPoints += amount;
	energyPoints--;
	std::cout << name << " repairs itself, recovering "
		<< amount << " hit points! Current HP: " << hitPoints << std::endl;
}
