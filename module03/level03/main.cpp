#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n--- DEFAULT CONSTRUCTOR ---" << std::endl;
    DiamondTrap defaultTrap;
    defaultTrap.whoAmI();

    std::cout << "\n--- PARAMETERIZED CONSTRUCTOR ---" << std::endl;
    DiamondTrap diamond("Gisus");
    diamond.whoAmI();

    std::cout << "\n--- ATTACK TEST ---" << std::endl;
    diamond.attack("Target");

    std::cout << "\n--- COPY CONSTRUCTOR ---" << std::endl;
    DiamondTrap copy(diamond);
    copy.whoAmI();

    std::cout << "\n--- ASSIGNMENT OPERATOR ---" << std::endl;
    DiamondTrap assigned;
    assigned = diamond;
    assigned.whoAmI();

    std::cout << "\n--- DESTRUCTOR TEST ---" << std::endl;

    return 0;
}

