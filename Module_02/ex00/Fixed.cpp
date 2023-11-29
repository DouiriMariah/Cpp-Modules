#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
}

Fixed:: Fixed(Fixed const& instance) //copie
{
    std::cout << "Copy constructor called\n";
    (*this) = instance;
}

Fixed &Fixed:: operator=(Fixed const& src) //mise a jour
{
    std::cout << "Assignment operator called\n";
    this->fixe = src.fixe;
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called\n";
    return(this->fixe);
}

void Fixed::setRawBits(int const raw)
{
    this->fixe = raw;
    std::cout << "setRawBits member function called\n";
}
