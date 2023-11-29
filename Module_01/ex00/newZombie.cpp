#include "Zombie.hpp"

Zombie *newZombie(std:: string name)
{
    Zombie *one;

    one = new Zombie(name);
    return(one);
}