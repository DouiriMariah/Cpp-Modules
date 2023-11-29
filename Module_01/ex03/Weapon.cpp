#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    std::string &final = _type;
    return(final);
}

void    Weapon::setType(std::string update)
{
    _type = update;
}

Weapon::Weapon(std::string name) : _type(name)
{
    std::string final;
    final = _type + " is your weapon\n";
    std::cout << final;
}

Weapon::~Weapon()
{
    std::string final;
    final = _type + "  doesn't exist anymore (Weapon Class)\n";
    std::cout << final;
}