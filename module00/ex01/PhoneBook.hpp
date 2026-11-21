#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	oldestContact;
		int	countContact;
	public:
		PhoneBook();
		void	addContact();
		void	searchContact();
		void	showDetailsByIndex(int i, int index);
		void	displayContact(int index) const;		
};

#endif
