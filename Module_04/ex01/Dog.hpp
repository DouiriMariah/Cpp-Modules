#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *nerv;
    public:
        Dog();
        Dog(Dog const &copy);
        Dog& operator=(Dog const &src);
        ~Dog();
        virtual void makeSound() const;
        void impress_your_ideas(std :: string sentence, int i);
        void print_ideas(int len);
} ;

#endif