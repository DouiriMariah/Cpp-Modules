#include "Zombie.hpp"
#include <cstring>
#include <iostream>

Zombie::Zombie()
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

void    Zombie::give_me_a_name(std:: string name)
{
    _name = name;
    announce();
}

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    Zombie *final = new Zombie[N];
    for(i = 0; i < N; i++)
    {
        final[i].give_me_a_name(name);
        std::cout << "i = " << i << std::endl;
    }
    return(final);
}