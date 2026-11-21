#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main(void)
{
	 Weapon weapon("Raygun");

	std::cout << "--- HumanA ---" << std::endl;
	HumanA umanoA("Sus", weapon);
	umanoA.attack();

	weapon.setType("Mark2");
	umanoA.attack();

	std::cout << "\n--- HumanB ---" << std::endl;
	HumanB umanoB("Jim");
	umanoB.attack();

	umanoB.setWeapon(weapon);
	umanoB.attack();

	weapon.setType("Plasma Gun");
	umanoB.attack();
	return (0);
}
