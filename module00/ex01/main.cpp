#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phoneBook;
	std::string	command;

	while (true)
	{
		std::cout << "The commands available are ADD, SEARCH or EXIT\nInsert a command: ";
		if (!std::getline(std::cin, command))
		{
			std::cout << std::endl;
			return (0);
		}
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
			return (0);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
