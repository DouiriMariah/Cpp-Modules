#include "HumanA.hpp"
#include <cstring>

void    HumanA::attack()
{
    std::string final;
    final = this->_name + " attacks with their " + this->status.getType();
    std::cout << final << std::endl;
}


HumanA::HumanA(std::string pseudo, Weapon& tool) : _name(pseudo), status(tool)
{
    std::string final;
    final = this->_name + " is created from HumanA class\n";
    std::cout << final;
}

HumanA::~HumanA()
{
    std::string final;
    final = _name + "  doesn't exist anymore (HumanA class)\n";
    std::cout << final;
}