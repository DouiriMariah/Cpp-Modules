#include "ScavTrap.hpp"

int main()
{
    ScavTrap mariah("Mariah");
    ClapTrap boss("Boss");
    
    std:: cout << std :: endl;
    mariah.takeDamage(3);
    boss.attack("Ippo");
    mariah.ClapTrap ::attack("Mafia");
    mariah.attack("Takamura");
    std:: cout << std :: endl;
    return(0);
}