#include "Contact.hpp"
#include <iostream>

std::string	Contact::getFirstName()	const
{
	return firstName;
}

void		Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string	Contact::getLastName()	const
{
	return lastName;
}

void		Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string	Contact::getNickname()	const
{
	return nickname;
}

void		Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string	Contact::getPhoneNumber() const
{
	return phoneNumber;
}

void		Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return darkestSecret;
}

void		Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void		Contact::showDetails() const
{
	std::cout << "First Name: " << getFirstName() << std::endl;
	std::cout << "Last Name: " << getLastName() << std::endl;
	std::cout << "Nickname: " << getNickname() << std::endl;
	std::cout << "Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << getDarkestSecret() << std::endl;
}
