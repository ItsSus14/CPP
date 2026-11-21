#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie	*zombieHorde(int n, std::string name)
{
	if(n <= 0)
	{
		std::cout << "Inserisci un numero positivo per creare l'orda" << std::endl;
		return (NULL);
	}
	Zombie *zombie = new Zombie[n];
	int i = 0;
	while(i < n)
	{
		zombie[i].setName(name);
		i++;
	}
	return zombie;
}
