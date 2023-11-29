#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &copy);
        Brain& operator=(Brain const &src);
        ~Brain();
        std ::string access_ideas(int i) const;
        void fill_ideas(std :: string sentence, int i);

};




#endif