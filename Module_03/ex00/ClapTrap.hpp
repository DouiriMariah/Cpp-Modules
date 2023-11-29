#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstring>
#include <stdlib.h>

class ClapTrap
{
    private:
        std::string _name;
        int _Hitpoint;
        int _Energypoint;
        int _Attackdamage;
    public:
        ClapTrap();
        ClapTrap(std :: string name);
        ClapTrap(ClapTrap const& copy);
        ClapTrap& operator=(ClapTrap const& src);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
} ;

#endif