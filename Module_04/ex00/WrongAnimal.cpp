#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default WrongAnimal type")
{
    std::cout << "WrongAnimal's default constructor is called\n";
}

WrongAnimal :: WrongAnimal(std::string name) : type(name)
{
    std::cout << "WrongAnimal's constructor with param is called\n";
}

WrongAnimal :: WrongAnimal(WrongAnimal const& copy)
{
    std::cout << "WrongAnimal's Copy constructor is called\n";
    (*this) = copy;
}

WrongAnimal &WrongAnimal:: operator=(WrongAnimal const& src)
{
    std::cout << "WrongAnimal's Assignment operator is called\n";
    type = src.type;
    return(*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's Destructor is called \n";
}

std :: string WrongAnimal:: getType() const
{
    return(type);
}

void    WrongAnimal:: makeSound() const
{
    std :: cout << "WrongAnimal sound\n";
}