#include "Brain.hpp"

Brain :: Brain()
{
    std::cout << "Brain's default constructor is called\n";
}

Brain :: Brain(Brain const &copy)
{
    std::cout << "Brain's copy constructor is called\n";
    *this = copy;
}

Brain& Brain :: operator=(Brain const &src)
{
    std::cout << "Brain's assignment operator is called\n";
    for(int i = 0; i < 100; i++)
    {
        ideas[i] = src.access_ideas(i);
    }
    return(*this);
}

Brain :: ~Brain()
{
    std::cout << "Brain's destructor is called\n";
}

std::string Brain:: access_ideas(int i) const
{
    return(ideas[i]);
}

void    Brain:: fill_ideas(std :: string sentence, int i)
{
    ideas[i] = sentence;
}
