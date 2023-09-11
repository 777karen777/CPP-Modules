#include "Harl.hpp"

Harl::Harl(void) {}
Harl::~Harl(void) {}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
    burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. \
    You didn't put enough bacon in my burger! If you did, I wouldn't \
    be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. \
    I've been coming for years whereas you started working here \
    since last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak \
    to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*ptr_debug) (void) = &Harl::debug;
    void (Harl::*ptr_info) (void) = &Harl::info;
    void (Harl::*ptr_warning) (void) = &Harl::warning;
    void (Harl::*ptr_error) (void) = &Harl::error;

    // ptr_debug  = &Harl::debug;
    // ptr_info = &Harl::info;
    // ptr_warning = &Harl::warning;
    // ptr_error = &Harl::error;


    int b = 1 * (level == "DEBUG") + 2 * (level == "INFO") +
    3 * (level == "WARNING") + 4 * (level == "ERROR");
    enum Comands{debug = 1, info, warning, error};
    // pointer_name = &class_name::member_function_name;


    switch (b) {
    default:
        std::cout << "Please use one of this commands: \"DEBUG\" ,\"INFO\" ,\"WARNING\" ,\"ERROR\" ";
        break;
    case debug:
        (this->*ptr_debug)();
        // break;
    case info:
        (this->*ptr_info)();
        // break;
    case warning:
        (this->*ptr_warning)();
        // break;
    case error:
        (this->*ptr_error)();
        // break;

}

}