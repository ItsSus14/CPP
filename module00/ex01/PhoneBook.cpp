#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
PhoneBook::PhoneBook()
{
	oldestContact = 0;
	countContact = 0;
}

static bool	readField(std::string prompt, std::string &value)
{
	value = "";
	while (value.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, value))
			return (false);
		if (value.empty())
			std::cout << "This field can't be empty." << std::endl;
	}
	return (true);
}

void		PhoneBook::addContact()
{
	Contact contact;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	if (!readField("First name: ", firstName)
		|| !readField("Last name: ", lastName)
		|| !readField("Nickname: ", nickname)
		|| !readField("Phone number: ", phoneNumber)
		|| !readField("Darkest secret: ", darkestSecret))
		return ;
	contact.setFirstName(firstName);
	contact.setLastName(lastName);
	contact.setNickname(nickname);
	contact.setPhoneNumber(phoneNumber);
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
		std::cout << "Contact number " << index << " does not exist." << std::endl;
		
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
	if (countContact == 0)
	{
		std::cout << "The phonebook is empty." << std::endl;
		return ;
	}
	std::string input;
	std::cout << "Insert index : ";
	if (!std::getline(std::cin, input))
		return ;
	std::stringstream ss(input);
	if (!(ss >> index) || !ss.eof())
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	displayContact(index);
}
