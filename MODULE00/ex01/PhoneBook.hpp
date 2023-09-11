#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"



class PhoneBook
{
	Contact contacts[8];
public:
	int	index;

	PhoneBook(void);
	~PhoneBook(void);

	void prompt(void);

	////////////// SEARCH //////////////

	void printPhoneBook(void) const;
	void search(int count) const;
	



};

#endif