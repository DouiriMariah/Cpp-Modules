#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if(ac < 2)
        return(std::cout << "Error: Number of Arguments is not valid\n", 1);

    std::vector<int> sequence;
    for (int i = 1; i < ac; ++i) 
    {
        std::istringstream iss(av[i]);
        std::string arg = av[i];
        size_t pos = arg.find_first_not_of("0123456789 ");
        int n; 
        if (!(iss >> n) || n < 0 || pos !=  std::string::npos)
            return (std::cerr << "Error: Invalid input sequence" << std::endl, 1);
        sequence.push_back(n);
    }
    PmergeMe a(sequence);

    std::cout << "Before:";
    for (size_t i = 0; i < a.getVector().size(); ++i)
        std::cout << " " << a.getVector()[i];
    std::cout << std::endl;
    std::cout << "After:";
    for (size_t i = 0; i < a.getDeque().size(); ++i)
        std::cout << " " << a.getDeque()[i];
    std::cout << std::endl;
    std::cout << "Time to process a range of " << a.getVector().size() << " elements with std::vector: " << a.GetVectorTime() << " us" << std::endl;
    std::cout << "Time to process a range of " << a.getVector().size() << " elements with std::deque: " << a.GetDequeTime() << " us" << std::endl;
}