#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;
    delete i;
    delete j;
    delete meta;

    std::cout << std::endl;
    const WrongAnimal *wolf = new WrongCat();
    WrongCat wolfi;

    std::cout << std::endl;
    std::cout << wolf->getType() << " " << std::endl;
    std::cout << wolfi.WrongAnimal :: getType() << " " << std::endl;
    
    std::cout << std::endl;
    wolfi.makeSound();
    wolf->makeSound();
    std::cout << std::endl;
    delete (wolf);

    return(0);
}