#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "                          DOG's init";
    std::cout << std::endl;

    const Animal* j = new Dog();
    
    std::cout << std::endl;

    std::cout << "                          Cat's init";
    std::cout << std::endl;
    
    const Animal* i = new Cat();
    
    std::cout << std::endl;
    
    delete j;
    delete i;

    std::cout << "                          My tests";
    std::cout << std::endl;

    Cat na;
    Dog ni;
    Cat no;
    
    std::cout << std::endl;
    na.impress_your_ideas("Mariah la BOSS", 4);
    ni.impress_your_ideas("Redescend aussi", 4);
    no.impress_your_ideas("Peace and love les amis", 4);
    
    na.print_ideas(4); std::cout << std::endl;
    ni.print_ideas(4); std::cout << std::endl;
    no.print_ideas(4); std::cout << std::endl;

    no = na;
    no.print_ideas(4);

    std::cout << std::endl;
    Dog john(ni);
    std::cout << std::endl;
    john.print_ideas(4);
    std::cout << std::endl;

    return(0);
}