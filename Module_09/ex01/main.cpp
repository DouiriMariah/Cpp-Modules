#include "RPN.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
        return(std::cerr << "Error: Number of Arguments is not valid\n", 1);
    std::string seq(av[1]);
    if(seq.find_first_not_of("0123456789 +-*/") != std::string::npos)
        return(std::cout << " Argument not vadid\n", 1);
    RPN a(seq);
    a.calculate();
    return(0);
}