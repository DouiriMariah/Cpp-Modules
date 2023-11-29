#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <cstddef>
#include <exception>


// template<typename T>
class Span
{
    private:
        std::vector<int> stock;
        unsigned int max;
    public:
        Span(unsigned int index);
        Span(Span const &copy);
        Span& operator=(Span const &src);
        ~Span();
        void addNumber(int const &element);
        void addRange(int count, int value);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        unsigned int get_limit() const;
        int display(unsigned int a)
        {
            return(stock[a]);
        }
        class Invalid : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Number not found");
                }
        };
        class No_push : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Too much numbers are already stocked");
                }
        };
};


#endif 