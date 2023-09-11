#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(void)/*  : last(0) */
{
	/* for (int i = 0; i < 8; i++) {
		this->contacts[i] = NULL;
	}
	this->prompt(); */
	// std::cout << "Contact Destructor called" << std::endl;
	return;
}

Contact::~Contact(void)
{
	// std::cout << "Contact Destructor called" << std::endl;
	return;
}

void Contact::add(void)
{
	setFirstName() ;
	setLastName() ;
	setNickName() ;
	setPhoneNumber() ;
	setDarkestSecret() ;
	std::cout << std::endl << "Contact is added!" << std::endl << std::endl;
}

void Contact::setFirstName(void)
{
	std::string name;
	while (7)
	{
		// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Enter first name!" << std::endl;
		std::getline(std::cin, name);
		if (std::cin.eof())
			break ;
		if (onlyAlphas(name))
		{
			this->firstName = name;
			return;
		}
		else
		{
			std::cout << std::endl << "  !!! WRONG !!! First name can include only alphabetical characters!" << std:: endl;
		}
	}	
}
void Contact::setLastName(void)
{
	std::string lastName;
	while (7)
	{
		std::cout << "Enter last Name!" << std::endl;
		// std::cin >> lastName;
		getline(std::cin, lastName);
		if (std::cin.eof())
			break ;

		if (onlyAlphas(lastName))
		{
			this->lastName = lastName;
			return;
		}
		else
		{
			std::cout << std::endl << "  !!! WRONG !!! Last name can include only alphabetical characters!" << std:: endl;
		}
	}	
}
void Contact::setNickName(void) 
{
	std::string nickname;
	while (7)
	{
		std::cout << "Enter nickname!" << std::endl;
		getline(std::cin, nickname);
		if (std::cin.eof())
			break ;
		try
		{
			myTrim(nickname);
			
		}
		catch(const std::exception& e)
		{
			std::cout << "\033[1;31mInvalid nickname!\033[0m" << std::endl;
			continue;
		}
		
		if(!nickname.length())
			std::cout << "\033[1;31mInvalid nickname!\033[0m" << std::endl;
		else
		{
			// std::cin >> nickname;
			this->nickName = nickname;
			return;
		}
	}	
}

void Contact::setPhoneNumber(void) 
{
	std::string phoneNumber;
	while (7)
	{
		std::cout << "Enter Phone Number!" << std::endl;
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			break ;

		if (isValidPhoneNumber(phoneNumber))
		{
			this->phoneNumber = phoneNumber;	
			return;
		}
		else
		{
			std::cout << std::endl << "  !!! WRONG !!! Phone Number only can be a positive number !" << std:: endl;
		}
	}	
}

void Contact::setDarkestSecret(void) 
{
	std::string setDarkestSecret;
	while(7)
	{
		std::cout << "Enter Darkest Secret!" << std::endl;
		getline(std::cin, setDarkestSecret);
		if (std::cin.eof())
			break ;
		try
		{
			myTrim(setDarkestSecret);
			
		}
		catch(const std::exception& e)
		{
			std::cout << "\033[1;31mInvalid Darkest Secret!\033[0m" << std::endl;
			continue;
		}
		
		if(!setDarkestSecret.length())
			std::cout << "\033[1;31mInvalid Darkest Secret!\033[0m" << std::endl;
		else
		{
			// std::cin >> nickname;
			this->darkestSecret = setDarkestSecret;
			return;
		}
	}/* 
	
	std::cout << "Enter Darkest Secret!" << std::endl;
	// std::cin >> setDarkestSecret;
	getline(std::cin, setDarkestSecret);
	if (std::cin.eof())
			break ;

	this->darkestSecret = setDarkestSecret;
	return;	 */	
}

bool isValidPhoneNumber(std::string& str) 
{
/*     size_t pos = 0;
    int num;

    num = std::stoi(str, &pos);

    return (pos == str.length()); */
	try
	{
		myTrim(str);				
	}
	catch(const std::exception& e)
	{
		return false;
	}
	int i = 0;
	if (str[i] == '+')
		i++;
    for(; str[i]; i++)
	{
		if(!std::isdigit(str[i]))
		{
			return false;
		}
	}
	return true;
}

bool onlyAlphas(const std::string& str) 
{
    for(int i = 0; str[i]; i++)
	{
		if(!std::isalpha(str[i]))
		{
			return false;
		}
	}
	return true;

}

void myTrim(std::string& str) 
{
	size_t start = str.find_first_not_of(" 	");
	size_t end = str.find_last_not_of(" 	");
	str = str.substr(start, end + 1);
	return;
}

/////////// Geters //////////////

std::string Contact::getFirstName(void) const 
{
	return (this->firstName);
}
std::string Contact::getLastName(void) const 
{
	return(this->lastName);
}
std::string Contact::getNickName(void) const 
{
	return(this->nickName);
}
std::string Contact::getPhoneNumber(void) const 
{
	return(this->phoneNumber);
}
std::string Contact::getDarkestSecret(void) const 
{
	return(this->darkestSecret);
}


