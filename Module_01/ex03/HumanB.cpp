#include <iostream>
#include <cstring>
#include "HumanB.hpp"

void HumanB::setWeapon(Weapon tool)
{
    status = &tool;
}

void    HumanB::attack()
{
    std::string final;
    if(status)
        final = this->_name + " attacks with their " + this->status->getType();
    else
        final = this->_name + " attacks without weapon";
    std::cout << final << std::endl;
}

HumanB::HumanB(std::string pseudo) : _name(pseudo)
{
    std::string final;
    final = this->_name + " is created from HumanB class\n";
    std::cout << final;
}

HumanB::~HumanB()
{
    std::string final;
    final = _name + "  doesn't exist anymore (HumanB class)\n";
    std::cout << final;
}