
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n--- CONSTRUCTION TEST ---" << std::endl;

    ClapTrap clap("Clappy");
    ScavTrap scav("Mario");
    ScavTrap defaultScav;

    std::cout << "\n--- ATTACK TEST ---" << std::endl;

    clap.attack("Enemy");
    scav.attack("Enemy");

    std::cout << "\n--- SPECIAL ABILITY TEST ---" << std::endl;

    scav.guardGate();

    std::cout << "\n--- DAMAGE AND REPAIR TEST ---" << std::endl;

    scav.takeDamage(30);
    scav.beRepaired(15);

    std::cout << "\n--- COPY CONSTRUCTOR TEST ---" << std::endl;

    ScavTrap copy(scav);
    copy.attack("Another enemy");

    std::cout << "\n--- ASSIGNMENT OPERATOR TEST ---" << std::endl;

    ScavTrap assigned("Luigi");
    assigned = scav;
    assigned.attack("Enemy");

    std::cout << "\n--- ENERGY EXHAUSTION TEST ---" << std::endl;

    for (int i = 0; i < 51; i++)
        scav.attack("Training dummy");

    std::cout << "\n--- END OF TESTS ---" << std::endl;

    return 0;
}

