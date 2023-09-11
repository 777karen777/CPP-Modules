#include "PhoneBook.hpp"
#include "Contact.hpp"


PhoneBook::PhoneBook(void) : index(-1)
{
	// std::cout << "Phonebook Constructor called" << std::endl;	
	// this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Phonebook Destructor called" << std::endl;
	return;
}

void PhoneBook::prompt(void)
{
	std::string command;
	while (7) 
	{
		std::cout << "Enter one of these commands: ADD, SEARCH or EXIT !" << std::endl;
		// std::cin >> command;
		std::getline(std::cin, command);
		if (std::cin.eof())
			break ;
		if (command == "EXIT") {
			break;		
		}
		else if (command == "ADD") {
			// this->add();	
			index++;
			this->contacts[this->index % 8].add();
			// std::cout << "COMAND ADD!" << std::endl;
		}
		else if (command == "SEARCH") {
			this->printPhoneBook();
			// std::cout << "COMAND SEARCH!" << std::endl;
		}
		else {
			std::cout << "WRONG COMAND !" << std::endl;
		}
	}
	return;
}

////////////// SEARCH //////////////

void PhoneBook::printPhoneBook(void) const
{
	std::cout << "   INDEX   |    NAME    |  LAST NAME |  NICKNAME " << std::endl;
	if(this->index < 0)
	{
		std::cout << " !!! There is no contracts to show !!!" << std::endl;
		return;
	}
	int count = this->index <= 7 ? this->index : 7;
	for(int i = 0; i <= count; i++)
	{
		std::cout << std::setw(10) << i << " | ";
		std::string firstName = this->contacts[i].getFirstName();
		std::string lastName = this->contacts[i].getLastName();
		std::string nickName = this->contacts[i].getNickName();
		if(firstName.length() > 10)
		{
			std::string str(firstName, 0, 9);
			std::cout << str << "." << " | ";
		}
		else
		{
			std::cout << std::setw(10) << firstName << " | ";
		}
		if(lastName.length() > 10)
		{
			std::string str(lastName, 0, 9);
			std::cout << str << "." << " | ";
		}
		else
		{
			std::cout << std::setw(10) << lastName << " | ";
		}
		if(nickName.length() > 10)
		{
			std::string str(nickName, 0, 9);
			std::cout << str << "." << " | ";
		}
		else
		{
			std::cout << std::setw(10) << nickName << std::endl;
		}
	}
	search(count);
}

void PhoneBook::search(int count) const
{
	int index;
	std::string str;
	while(7)
	{
		std::cout << "Enter index of the contact!" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if(str.length() != 1 || str[0] < '0' || str[0] > count + '0')
		{
			std::cout << "\033[1;31mInvalid index!\033[0m" << std::endl;
			continue;
		}
		// std::cin >> index;
		// std::cout << "\033[0m";
		// if (std::cin.fail() || index < 0 || index > count/* phonebook.get_size() */)
		// {
		// 	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		// 	std::cout << "\033[1;31mInvalid index!\033[0m" << std::endl;
		// } 
		else
		{
			index = str[0] - '0';
			std::cout << contacts[index].getFirstName() << std::endl;
			std::cout << contacts[index].getLastName() << std::endl;
			std::cout << contacts[index].getNickName() << std::endl;
			std::cout << contacts[index].getPhoneNumber() << std::endl;
			std::cout << contacts[index].getDarkestSecret() << std::endl;
			return;

		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	
}


