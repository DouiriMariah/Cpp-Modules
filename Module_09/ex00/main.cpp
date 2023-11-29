
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
        return(std::cout << "Error: Number of Arguments is not valid\n", 1);
    
    BitcoinExchange a(av[1]);

    return(0);
}