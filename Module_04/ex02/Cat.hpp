#ifndef CAT_HPP
#define CAT_HPP 

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *nerv;
    public:
        Cat();
        Cat(Cat const &copy);
        Cat& operator=(Cat const &src);
        ~Cat();
        virtual void makeSound() const;
        void impress_your_ideas(std :: string sentence, int i);
        void print_ideas(int len);

} ;


#endif