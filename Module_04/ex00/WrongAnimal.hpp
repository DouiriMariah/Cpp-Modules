#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include <stdlib.h>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std :: string _type);
        WrongAnimal(WrongAnimal const &copy);
        WrongAnimal& operator=(WrongAnimal const &src);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
} ;






#endif