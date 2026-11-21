#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include <string>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap &other);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
