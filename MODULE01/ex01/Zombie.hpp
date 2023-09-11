#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <cctype>
#include <iomanip>      // std::setw
#include <stdlib.h>     /* atoi */



class  Zombie
{

	std::string name;


public:
	Zombie();
	Zombie(std::string);
	~Zombie(void);

	void setName( std::string name );
	void announce( void );
};

Zombie* zombieHorde( int N, std::string name);


#endif