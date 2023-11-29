#include "easyfind.hpp"

int main()
{
    std::vector<int>tab;
    tab.reserve( 5 );
    tab.push_back( 0 );
    tab.push_back( 1 );
    tab.push_back( 2 );
    tab.push_back( 4 );
    tab.push_back( 3 );

    std::cout << "         Initialisation of an int tab\n";
    std::vector<int>::iterator ptr;
    for (ptr = tab.begin(); ptr < tab.end(); ptr++)
        std::cout << *ptr << " ";
    std::cout << std::endl;

    std::cout << "         Test functionnal, occurence is 4\n";
    std::vector<int>::iterator test;
    
    test = easyfind(tab, 4);
    if(test == tab.end())
        std::cout << "No occurence has been found\n";
    else
        std::cout << "Easyfind return value = " << *test << std::endl;

    std::cout << "         Test unfunctionnal, occurence is 6\n";
    test = easyfind(tab, 6);
    if(test == tab.end())
        std::cout << "No occurence has been found\n";
    else
        std::cout << "Easyfind return value = " << *test << std::endl;

    return(0);
}
