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
	Zombie(std::string);
	~Zombie(void);

	void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );


#endif