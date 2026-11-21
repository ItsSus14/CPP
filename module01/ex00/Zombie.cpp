#include "Zombie.hpp"
#include <iostream>
#include "zombieUtils.hpp"

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

int main(void)
{
	Zombie zombie("Sus");
	zombie.announce();
	Zombie *zombie1 = newZombie("Sus2");
	zombie1->announce();
	randomChump("Sus3");
	delete zombie1;
	return (0);
}
