#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog's Default constructor is called\n";
}

Dog :: Dog(Dog const& copy) : Animal(copy.getType())
{
    std::cout << "Dog's Copy constructor is called\n";
}

Dog &Dog:: operator=(Dog const& src)
{
    std::cout << "Dog's Assignment operator is called\n";
    type = src.type;
    return(*this);
}

Dog::~Dog()
{
    std::cout << "Dog's Destructor is called \n";
}

void Dog :: makeSound() const
{
    std::cout << "Waf\n";
}