#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstring>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void give_me_a_name(std::string name);
        void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std ::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
