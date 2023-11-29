#include "iter.hpp"

template<typename T>
void display_tab(T const &str)
{
    std::cout << str << std::endl;
}

int main()
{
    char m[] = "bonjour";

    std::cout << "Iter on " << m << std::endl;
    iter(m, strlen(m), &display_tab);
}