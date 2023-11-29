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
        bool operator<(Fixed const& src)const;
        bool operator>(Fixed const& src)const;
        bool operator<=(Fixed const& src)const;
        bool operator>=(Fixed const& src)const;
        bool operator==(Fixed const& src)const;
        bool operator!=(Fixed const& src)const;
        Fixed operator+(Fixed const& src)const;
        Fixed operator-(Fixed const& src)const;
        Fixed operator*(Fixed const& src)const;
        Fixed operator/(Fixed const& src)const;
        Fixed& operator++();
        Fixed operator++(int i);
        Fixed& operator--();
        Fixed operator--(int i);
        static Fixed&  max(Fixed &a, Fixed &b);
        static const Fixed& max(Fixed const &a, Fixed const &b);
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(Fixed const &a, Fixed const &b);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator << (std :: ostream& o, Fixed const& i);

#endif