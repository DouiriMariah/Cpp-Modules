#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    nerv = new Brain();
    std::cout << "Cat's default constructor is called\n";
}

Cat :: Cat(Cat const& copy) : Animal(copy.getType())
{
    nerv = copy.nerv;
    std::cout << "Cat's Copy constructor is called\n";
}

Cat &Cat:: operator=(Cat const& src)
{
    std::cout << "Cat's Assignment operator is called\n";
    type = src.type;
    if(nerv)
        delete(nerv);
    nerv = new Brain(*src.nerv);
    return(*this);
}

Cat::~Cat()
{
    delete(nerv);
    std::cout << "Cat's Destructor is called \n";
}

void Cat :: makeSound() const
{
    std::cout << "Miaou\n";
}

void Cat:: print_ideas(int len)
{
    std:: cout << "Let's see Cat's ideas\n";
    for(int i = 0; i < len; i++)
        std:: cout << nerv->access_ideas(i) << std::endl;
}
    


void Cat :: impress_your_ideas(std :: string sentence, int len)
{
    if(len > 100)
    {
        std::cout << "Len must be <= 100\n";
        return;
    }
    for(int i = 0; i < len; i++)
        nerv->fill_ideas(sentence, i);
}