#include "Base.hpp"

int main()
{
    Base *king;

    king = generate();
    std::cout << "Identify with pointer\n";
    identify(king);
    std::cout << "Identify with reference\n";
    identify(*king);
    delete (king);
    return(0);
}