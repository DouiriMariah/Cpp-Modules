#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
    private:
        int fixe;
        int const static nb = 8;
    public:
        Fixed();
        Fixed( Fixed const& instance);
        Fixed& operator=(Fixed const& src);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif