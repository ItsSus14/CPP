#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	name = "Unknown";	
}
Zombie::Zombie(std::string name)
{
	this->name = name;
}

void	Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": is dead!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

