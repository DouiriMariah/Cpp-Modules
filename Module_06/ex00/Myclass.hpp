#ifndef MYCLASS_HPP
#define MYCLASS_HPP

#include <string>
#include <iostream>
#include <cfloat>
#include <cmath>
#include <iomanip>
#include <climits>


class Myclass
{
    private:
        char _char;
        int _int;
        float _float;
        double _double;
    public:
        Myclass();
        Myclass(Myclass const &copy);
        Myclass& operator=(Myclass const &src);
        ~Myclass();
        void convert_all(const std::string& convert);
        double get_double_val() const;
        int get_int_val() const;
        char get_char_val() const;
        float get_float_val() const;

        void to_char(std::string convert);
        void to_int();

        class Exception_I : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("impossible");
                };
        };
        class Exception_D : public std::exception
        {
            public:
               virtual const char* what() const throw()
               {
                   return("Non displayable");
               };
        };
};





#endif