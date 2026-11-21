#include "Zombie.hpp"
#include "zombieHorde.hpp"

int	main(void)
{
	int n = 5;
	Zombie *zombie = zombieHorde(n, "SUS");
	int i = 0;
	while(i < n)
	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}
