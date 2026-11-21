#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		std::string	getFirstName() const;
		void		setFirstName(std::string);
		std::string	getLastName() const;
		void		setLastName(std::string);
		std::string	getNickname() const;
		void		setNickname(std::string);
		std::string	getPhoneNumber() const;
		void		setPhoneNumber(std::string);
		std::string	getDarkestSecret() const;
		void		setDarkestSecret(std::string);
		void		showDetails() const;
};
#endif
