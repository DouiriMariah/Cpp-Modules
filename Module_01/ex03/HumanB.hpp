#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private :
       std::string _name;
        Weapon *status;
    public:
       HumanB(std::string pseudo);
       ~HumanB();
       void attack();
       void setWeapon(Weapon tool);
};


#endif