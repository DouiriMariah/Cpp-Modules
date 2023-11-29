#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Default constructor is called\n";
}

Animal :: Animal(std::string name) : type(name)
{
    std::cout << "Constructor with param is called\n";
}

Animal :: Animal(Animal const& copy)
{
    std::cout << "Copy constructor is called\n";
    (*this) = copy;
}

Animal &Animal:: operator=(Animal const& src)
{
    std::cout << "Assignment operator is called\n";
    type = src.type;
    return(*this);
}

Animal::~Animal()
{
    std::cout << "Destructor is called \n";
}

std :: string Animal:: getType() const
{
    return(type);
}

void    Animal:: makeSound() const
{
    std :: cout << "Animal sound\n";
}