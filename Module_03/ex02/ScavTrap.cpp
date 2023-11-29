#include "ScavTrap.hpp"

ScavTrap :: ScavTrap() : ClapTrap("None", 100, 50, 20)
{
    std::cout << "ScavTrap's default constructor is called\n";
}

ScavTrap :: ScavTrap(std ::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap's param constructor is called\n";
}

ScavTrap :: ScavTrap(ScavTrap const &copy) : 
    ClapTrap(copy._name, copy._Hitpoint, copy._Energypoint, copy._Attackdamage)
{
    std::cout << "ScavTrap's copy constructor is called\n";
}

ScavTrap :: ~ScavTrap()
{
    std::cout << "ScavTrap's destructor is called\n";
}

ScavTrap &ScavTrap:: operator=(ScavTrap const &src)
{
    std::cout << "ScavTrap's assignment operator is called\n";
    this->_name = src._name;
    this->_Hitpoint = src._Hitpoint;
    this->_Energypoint = src._Energypoint;
    this->_Attackdamage = src._Attackdamage;
    return(*this);
}

void ScavTrap:: attack(std ::string target)
{
    std:: cout << "ScavTrap is on attack mode, ";
    this->ClapTrap ::attack(target);
}

void ScavTrap:: guardGate()
{
    std:: cout << "ScavTrap is entred into Gate keeper mode\n";
}