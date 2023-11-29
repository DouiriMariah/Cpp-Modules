#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap mariah("Mariah");
    FragTrap douiri;
    ClapTrap boss("Boss");

    std:: cout << std :: endl;
    mariah.takeDamage(3);
    douiri.ClapTrap ::beRepaired(6);
    boss.attack("Ippo");
    mariah.ClapTrap ::attack("Mafia");
    mariah.attack("Takamura");
    douiri.attack("Tokyo");
    douiri.ClapTrap ::attack("Nipon");
    mariah.guardGate();
    douiri.highFivesGuys();
    std:: cout << std :: endl;

    return(0);
}