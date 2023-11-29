#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>


class Fixed
{
    private:
        int fixe;
        int const static nb = 8;
    public:
        Fixed();
        Fixed(int const i);
        Fixed(float const a);
        Fixed( Fixed const& instance);
        Fixed& operator=(Fixed const& src);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator << (std :: ostream& o, Fixed const& i);

#endif