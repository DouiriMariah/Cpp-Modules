#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat's default constructor is called\n";
}

WrongCat :: WrongCat(WrongCat const& copy) : WrongAnimal(copy.getType())
{
    std::cout << "WrongCat's Copy constructor is called\n";
}

WrongCat &WrongCat:: operator=(WrongCat const& src)
{
    std::cout << "WrongCat's Assignment operator is called\n";
    type = src.type;
    return(*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat's Destructor is called \n";
}

void WrongCat :: makeSound() const
{
    std::cout << "Wrong Miaou\n";
}