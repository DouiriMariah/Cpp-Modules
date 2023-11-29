#include "Fixed.hpp"
#include <iostream>

int main()
{
    Fixed a;
    Fixed	c(1);
	Fixed	d(2);
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << "Init\n";
    std::cout << "\n";
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    std::cout << "\n";
    std::cout << "Increment and decrement operators\n";
    std::cout << "\n";

    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    std::cout << "\n";
    std::cout << "Max and min\n";
    std::cout << "\n";

    std::cout << "Max between a and b = " << Fixed::max(a, b ) << std::endl;
    std::cout << "Min between a and b = " << Fixed::min(a, b ) << std::endl;

    std::cout << "\n";
    std::cout << "Arithmetic operators\n";
    std::cout << "\n";

    std::cout << "(b - c) = " << (b - c) << std::endl;
	std::cout << "(b / d) = " << (b / d) << std::endl;
	std::cout << "(b * d) = " << (b * d) << std::endl;
	std::cout << "(b + d) = " << (b + d) << std::endl;

    std::cout << "\n";
    std::cout << "Comparison operators\n";
    std::cout << "\n";

	std::cout << "(a < b) = " << (a < b) << std::endl;
	std::cout << "(a > b) = " << (a > b) << std::endl;
	std::cout << "(a <= b) = " << (a <= b) << std::endl;
	std::cout << "(a >= b) = " << (a >= b) << std::endl;
	std::cout << "(a != b) = " << (a != b) << std::endl;
	std::cout << "(a == b) = " << (a == b) << std::endl;

    return(0);
}