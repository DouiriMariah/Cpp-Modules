#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <cstring>
#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string name);
        ~Weapon();
        const std::string& getType();
        void setType(std::string update);
};


#endif