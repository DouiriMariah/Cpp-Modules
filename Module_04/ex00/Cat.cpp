#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat's default constructor is called\n";
}

Cat :: Cat(Cat const& copy) : Animal(copy.getType())
{
    std::cout << "Cat's Copy constructor is called\n";
}

Cat &Cat:: operator=(Cat const& src)
{
    std::cout << "Cat's Assignment operator is called\n";
    type = src.type;
    return(*this);
}

Cat::~Cat()
{
    std::cout << "Cat's Destructor is called \n";
}

void Cat :: makeSound() const
{
    std::cout << "Miaou\n";
}