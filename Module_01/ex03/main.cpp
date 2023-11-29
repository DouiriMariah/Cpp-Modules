#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("Katana");
    HumanA bob("Zoro", club);
    bob.attack();
    club.setType("AK47");
    bob.attack();
    
    Weapon clubi = Weapon("Bomb");
    HumanB jim("Mariah");
    jim.attack();
    jim.setWeapon(clubi);
    jim.attack();
    clubi.setType("Gun");
    jim.attack();

    return(0);
}