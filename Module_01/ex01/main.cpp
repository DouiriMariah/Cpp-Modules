#include "Zombie.hpp"

int main()
{
    Zombie *final;

    final = zombieHorde(4, "Mariah");
    delete[](final);
    return(0);

}