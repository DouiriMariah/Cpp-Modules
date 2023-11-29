#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : 
    _name("None"), _Hitpoint(10), _Energypoint(10), _Attackdamage(0)
{
    std::cout << "Default constructor is called\n";
}

ClapTrap::ClapTrap(std :: string name) : 
    _name(name), _Hitpoint(10), _Energypoint(10), _Attackdamage(0)
{
    std::cout << "Constructor with param is called\n";
}

ClapTrap :: ClapTrap(std::string name, int h, int e, int a) :
    _name(name), _Hitpoint(h), _Energypoint(e), _Attackdamage(a)
{
    std::cout << "Constructor with param for ScavTrap is called\n";
}

ClapTrap :: ClapTrap(ClapTrap const& copy)
{
    std::cout << "Copy constructor is called\n";
    (*this) = copy;
}

ClapTrap &ClapTrap:: operator=(ClapTrap const& src)
{
    std::cout << "Assignment operator is called\n";
    _name = src._name;
    _Hitpoint = src._Hitpoint;
    _Energypoint = src._Energypoint;
    _Attackdamage = src._Attackdamage;
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor is called \n";
}

void ClapTrap:: attack(const std::string& target)
{
    if (_Energypoint > 0 && _Hitpoint > 0)
    {
        std::cout << _name << " attacks " << target 
            << ", causing " << _Attackdamage << " points of damage!\n";
        _Energypoint--;
    }
    else
    {
        std:: cout << _name << " can't attack " 
            << target << std :: endl;
    }
}

void ClapTrap :: takeDamage(unsigned int amount)
{
    if (_Energypoint > 0 && _Hitpoint > 0)
    {
        std:: cout << _name << " has lost " <<  amount << 
        " hitpoints\n";
        _Hitpoint -= amount;
    }
    else
        std:: cout << "RIP " << _name << std::endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if (_Energypoint > 0 && _Hitpoint > 0)
    {
        std:: cout << _name << " has been repaired by " 
            << amount << " hitpoints\n";
        _Hitpoint += amount;
        _Energypoint--;
    }
    else
        std::cout << _name << " can't be repaired\n";
}
