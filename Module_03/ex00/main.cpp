#include "ClapTrap.hpp"

int main()
{
    ClapTrap mariah("Ippo");
    ClapTrap boss("Takamura");
    
    std:: cout << std :: endl;
    mariah.attack("Takamura");
    boss.takeDamage(4);
    boss.beRepaired(6);
    boss.attack("Ippo");
    mariah.takeDamage(8);
    mariah.beRepaired(3);
    boss.attack("Ippo");
    mariah.takeDamage(10);
    mariah.attack("Takamura");
    std:: cout << std :: endl;

    return(0);
}