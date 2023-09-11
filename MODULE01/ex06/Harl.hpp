#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include <fstream>
#include <string>

class Harl
{
private:

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Harl(void);
	~Harl(void);
	void (*ptr_debug) (void);
    void (*ptr_info) (void);
    void (*ptr_warning) (void);
    void (*ptr_error) (void);

	void complain( std::string level );
};

#endif