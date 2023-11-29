#include "FragTrap.hpp"

FragTrap :: FragTrap() : ClapTrap("Default", 100, 100, 30)
{
    std::cout << "FragTrap's default constructor is called\n";
}

FragTrap :: FragTrap(std ::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap's param constructor is called\n";
}

FragTrap :: FragTrap(FragTrap const &copy) : 
    ClapTrap(copy._name, copy._Hitpoint, copy._Energypoint, copy._Attackdamage)
{
    std::cout << "FragTrap's copy constructor is called\n";
}

FragTrap :: ~FragTrap()
{
    std::cout << "FragTrap's destructor is called\n";
}

FragTrap &FragTrap:: operator=(FragTrap const &src)
{
    std::cout << "FragTrap's assignment operator is called\n";
    this->_name = src._name;
    this->_Hitpoint = src._Hitpoint;
    this->_Energypoint = src._Energypoint;
    this->_Attackdamage = src._Attackdamage;
    return(*this);
}

void    FragTrap:: attack(std ::string target)
{
    std:: cout << "FragTrap goes on the offensive, ";
    this->ClapTrap ::attack(target);
}

void    FragTrap:: highFivesGuys()
{
    std :: cout << "Can you give me a highfive ?\n"; 
}