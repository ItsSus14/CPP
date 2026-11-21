
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n--- FRAGTRAP CONSTRUCTION ---" << std::endl;
    FragTrap frag("Mario");
    FragTrap defaultFrag;

    std::cout << "\n--- SPECIAL ABILITY ---" << std::endl;
    frag.highFivesGuys();

    std::cout << "\n--- INHERITED ATTACK ---" << std::endl;
    frag.attack("Luigi");

    std::cout << "\n--- DAMAGE AND REPAIR ---" << std::endl;
    frag.takeDamage(40);
    frag.beRepaired(20);

    std::cout << "\n--- COPY CONSTRUCTOR ---" << std::endl;
    FragTrap copy(frag);
    copy.highFivesGuys();

    std::cout << "\n--- ASSIGNMENT OPERATOR ---" << std::endl;
    FragTrap assigned("Yoshi");
    assigned = frag;
    assigned.attack("Bowser");

    std::cout << "\n--- ENERGY EXHAUSTION ---" << std::endl;
    for (int i = 0; i < 101; i++)
        defaultFrag.attack("Target");

    std::cout << "\n--- END OF MAIN ---" << std::endl;
    return 0;
}

