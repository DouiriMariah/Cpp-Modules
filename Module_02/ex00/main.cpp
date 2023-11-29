#include "Fixed.hpp"

int main()
{
    std::cout << "                         Init\n";
    std::cout << "\n";

    Fixed a;
    a.setRawBits(8);
    Fixed b(a);
    a.setRawBits(4);
    Fixed c;

    c = b;

    std::cout << std::endl;
    std::cout << "                           Getrawbits\n";
    std::cout << std::endl;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    std::cout << std::endl;
    return(0);
}