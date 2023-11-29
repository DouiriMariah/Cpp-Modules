#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
       std::string _name;
       Weapon &status;
    public:
       HumanA(std::string pseudo, Weapon& tool);
       ~HumanA();
       void attack();
};


#endif