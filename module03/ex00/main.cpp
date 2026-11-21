
#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n--- CONSTRUCTION TEST ---" << std::endl;

    ClapTrap clap("Clappy");
    ClapTrap defaultClap;

    std::cout << "\n--- ATTACK TEST ---" << std::endl;

    clap.attack("Enemy");

    std::cout << "\n--- DAMAGE AND REPAIR TEST ---" << std::endl;

    clap.takeDamage(4);
    clap.beRepaired(3);

    std::cout << "\n--- COPY CONSTRUCTOR TEST ---" << std::endl;

    ClapTrap copy(clap);
    copy.attack("Another enemy");

    std::cout << "\n--- ASSIGNMENT OPERATOR TEST ---" << std::endl;

    ClapTrap assigned("Trappy");
    assigned = clap;
    assigned.attack("Enemy");

    std::cout << "\n--- ENERGY EXHAUSTION TEST ---" << std::endl;

    for (int i = 0; i < 10; i++)
        clap.attack("Training dummy");
    clap.beRepaired(5);

    std::cout << "\n--- DESTRUCTION TEST ---" << std::endl;

    defaultClap.takeDamage(20);
    defaultClap.attack("Enemy");
    defaultClap.beRepaired(5);

    std::cout << "\n--- END OF TESTS ---" << std::endl;

    return 0;
}
