#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <limits>
PhoneBook::PhoneBook()
{
	oldestContact = 0;
	countContact = 0;
}

void		PhoneBook::addContact()
{
	Contact contact;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "First name: ";
	std::getline(std::cin, firstName);
	contact.setFirstName(firstName);

	std::cout << "Last name: ";	
	std::getline(std::cin, lastName);
	contact.setLastName(lastName);
	
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	contact.setNickname(nickname);	

	std::cout << "Phone number: ";
	std::getline(std::cin, phoneNumber);
	contact.setPhoneNumber(phoneNumber);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkestSecret);
	contact.setDarkestSecret(darkestSecret);

	contacts[oldestContact] = contact;
	oldestContact++;
	if(oldestContact == 8)
		oldestContact = 0;
	if(countContact < 8)
		countContact++;
	return ;
}

std::string	formatString(std::string str)
{
	if(str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void		PhoneBook::showDetailsByIndex(int i, int index)
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	firstName = formatString(contacts[index].getFirstName());
	lastName = formatString(contacts[index].getLastName());
	nickname = formatString(contacts[index].getNickname());
	std::cout	<< std::setw(10) << i << "|"
			<< std::setw(10) << firstName << "|"
			<< std::setw(10) << lastName << "|"
			<< std::setw(10) << nickname << "|"
			<< std::endl;
}

void		PhoneBook::displayContact(int index) const
{
	int arrayIndex;
	if(countContact > index && index >= 0)
	{
		if(countContact < 8)
			arrayIndex = index;
		else
			arrayIndex = (oldestContact + index) % 8;
		contacts[arrayIndex].showDetails();
	}
	else
		std::cout << "Il contatto numero " << index << " non esiste nella rubrica" << std::endl;
		
}

void		PhoneBook::searchContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	int i = 0;
	int index;
	std::cout	<< std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname"
			<< std::endl;
	if(countContact < 8)
	{
		while(i < countContact)
		{
			showDetailsByIndex(i, i);
			i++;
		}
	}
	else if(countContact == 8)
	{
		while (i < 8)
		{
			index = (oldestContact+i) % 8;
			showDetailsByIndex(i, index);
			i++;
		}
	}
	std::cout << "Insert index : ";
	std::cin >> index;
	displayContact(index);
}


/*int main()
{
	PhoneBook phoneBook;
	std::string command;
	while(true)
	{
		std::cout << "The commands avaible are ADD, SEARCH or EXIT\nInsert a command :";
		std::cin >> command;
		if(command == "ADD")
			phoneBook.addContact();
		else if(command == "SEARCH")
			phoneBook.searchContact();
		else if(command == "EXIT")
			return (0);
	}
    return (0);
}*/
