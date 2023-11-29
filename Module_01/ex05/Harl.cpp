#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructeur\n";
}

Harl::~Harl()
{
    std::cout << "Destructeur\n";
}

void    Harl::complain(std ::string level)
{
    void    (Harl::*p[4])(void) = 
    {
        p[0] = &Harl::info,
        p[1] = &Harl::debug,
        p[2] = &Harl::warning,
        p[3] = &Harl::error,

    };
    std :: string cmd[4] = {
        "INFO", "DEBUG", "WARNING", "ERROR"
    };
    int i;
    for(i = 0; i < 4; i++)
    {
        if(cmd[i] == level)
        {
            (this->*p[i])();
            break;
        }
    }
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !\n";
}

void    Harl::warning()
{
    std::cout << " think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void    Harl::error()
{
    std::cout << "This is unacceptable ! I want to speak to the manager now.\n";
}

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !\n";
}