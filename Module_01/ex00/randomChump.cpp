#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie final(name);
    
    final.announce();
}
