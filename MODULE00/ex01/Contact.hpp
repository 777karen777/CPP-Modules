#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>      // std::setw
#include <stdlib.h>     /* atoi */



class  Contact
{

	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

public:
	Contact(void);
	~Contact(void);

	//////////////   ADD   //////////////


	void add(void);

	void setFirstName(void) ;
	void setLastName(void) ;
	void setNickName(void) ;
	void setPhoneNumber(void) ;
	void setDarkestSecret(void) ;

	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;


};

bool onlyAlphas(const std::string& str);
bool isValidPhoneNumber(std::string& str);
void myTrim(std::string& str);


#endif