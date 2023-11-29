#include "Zombie.hpp"

int main()
{
    randomChump("Mariah");

    Zombie *final;

    final = newZombie("Douiri");
    final->announce();
    delete(final);
    return(0);

}