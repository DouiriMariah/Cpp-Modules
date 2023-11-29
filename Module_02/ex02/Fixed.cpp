#include "Fixed.hpp"
#include <stdio.h>

Fixed Fixed:: operator*(Fixed const& src)const
{
    Fixed final;

    final.setRawBits((fixe * src.fixe) / 256);
    return(final);
}

Fixed Fixed:: operator/(Fixed const& src)const
{
    Fixed final;

    final.setRawBits((fixe / src.fixe) * 256);
    return(final);
}

Fixed Fixed:: operator-(Fixed const& src)const
{
    return(Fixed((fixe - src.fixe) / 256));
}

Fixed Fixed:: operator+(Fixed const& src)const
{
    return(Fixed ((this->fixe + src.fixe)) / 256);
}

Fixed &Fixed:: max(Fixed &a, Fixed &b)
{
    if(a < b)
        return(b);
    return(a);
}

const Fixed &Fixed:: max(const Fixed &a, const Fixed &b)
{
    if((Fixed)a < (Fixed)b)
        return(b);
    return(a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if(a < b)
        return(a);
    return(b);
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if((Fixed)a < (Fixed)b)
        return(a);
    return(b);
}

Fixed Fixed:: operator ++(int i)
{
    Fixed final;
    final.setRawBits(this->fixe);
    this->fixe = this->fixe + 1;
    (void)i;
    return(final);
}

Fixed &Fixed:: operator ++()
{
    fixe = fixe + 1;
    return(*this);
}

Fixed &Fixed:: operator --()
{
    fixe = fixe - 1;
    return(*this);
}

Fixed Fixed:: operator --(int i)
{
    Fixed final;
    final.setRawBits(this->fixe);
    this->fixe = this->fixe - 1;
    (void)i;
    return(final);
}

Fixed::Fixed() : fixe(0)
{
   // std::cout << "Default constructor called\n";
}

Fixed:: Fixed(Fixed const& instance) //copie
{
    //std::cout << "Copy constructor called\n";
    (*this) = instance;
}

Fixed &Fixed:: operator=(Fixed const& src) //mise a jour 
{
   // std::cout << "Assignment operator called\n";
    this->fixe = src.getRawBits();
    return(*this);
}

bool Fixed:: operator>(Fixed const& src) const
{
    if(fixe > src.fixe)
        return(true);
    return(false);  
}

bool Fixed:: operator<(Fixed const& src)const
{
    if(fixe < src.fixe)
        return(true);
    return(false);  
}

bool Fixed:: operator==(Fixed const& src) const
{
    if(fixe == src.fixe)
        return(true);
    return(false);  
}

bool Fixed:: operator>=(Fixed const& src) const
{
    if(fixe >= src.fixe)
        return(true);
    return(false);  
}

bool Fixed:: operator<=(Fixed const& src) const
{
    if(fixe <= src.fixe)
        return(true);
    return(false);  
}

bool Fixed:: operator!=(Fixed const& src) const
{
    if(fixe != src.fixe)
        return(true);
    return(false);  
}

Fixed::Fixed(int const i)
{
    this->fixe = i << this->nb;
   // std::cout << "Constructor int to fixed  called\n";
}

Fixed::Fixed(float const a)
{
    this->fixe = (int)roundf(a * (1 << nb));
    //std::cout << "Constructor float to fixed called\n";
}

Fixed::~Fixed()
{
  //  std::cout << "Destructor called\n";
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
    //std::cout << "Affichage " << i.getRawBits() << " => " << i.toFloat() << std :: endl;
    o << i.toFloat();
    return(o);
}