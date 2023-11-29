#include "Fixed.hpp"
#include <stdio.h>

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

Fixed::Fixed(int const i)
{
    this->fixe = i << this->nb;
    std::cout << "Constructor int to fixed  called\n";
}

Fixed::Fixed(float const a)
{
    this->fixe = (int)roundf(a * (1 << nb));
    std::cout << "Constructor float to fixed called\n";
    printf("float = %f et fixe = %d\n", a, this->fixe);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
   // std::cout << "getRawBits member function called\n";
    return(this->fixe);
}

void Fixed::setRawBits(int const raw)
{
    this->fixe = raw;
    //std::cout << "setRawBits member function called\n";
}


//CONVERSION

float Fixed::toFloat( void ) const
{
  //  std::cout << "ToFloat member function called\n";
    return(((float)(this->fixe) / (float)(1 << this->nb)));
}


int Fixed::toInt( void ) const //bon
{
    return((int)(this->fixe >> this->nb));
}

//OPERATOR SURCHARGE

std::ostream& operator<<(std::ostream& o, Fixed const& i) //bon
{
    o << i.toFloat();
    return(o);
}