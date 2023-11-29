#include "Zombie.hpp"
#include <cstring>
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
    std::cout << "I am the constructeur\n";
}

Zombie::~Zombie()
{
    std::string final;
    final = _name + "  doesn't exist anymore\n";
    std::cout << final;
}

void    Zombie::announce(void)
{
    std::string final;
    final = this->_name + ": BraiiiiiiinnnzzzZ...\n";
    std::cout << final;
}