#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    nerv = new Brain();
    std::cout << "Dog's Default constructor is called\n";
}

Dog :: Dog(Dog const& copy) : Animal(copy.getType())
{
    nerv = new Brain(*copy.nerv);
    std::cout << "Dog's Copy constructor is called\n";
}

Dog &Dog:: operator=(Dog const& src)
{
    std::cout << "Dog's Assignment operator is called\n";
    type = src.type;
    if(nerv)
        delete(nerv);
    nerv = new Brain(*(src.nerv));
    return(*this);
}

Dog::~Dog()
{
    delete(nerv);
    std::cout << "Dog's Destructor is called \n";
}

void Dog :: makeSound() const
{
    std::cout << "Waf\n";
}

void Dog:: print_ideas(int len)
{
    std:: cout << "Let's see Dog's ideas\n";
    for(int i = 0; i < len; i++)
        std:: cout << nerv->access_ideas(i) << std::endl;
}

void Dog :: impress_your_ideas(std :: string sentence, int len)
{
    if(len > 100)
    {
        std::cout << "Len must be <= 100\n";
        return;
    }
    for(int i = 0; i < len; i++)
        nerv->fill_ideas(sentence, i);
}