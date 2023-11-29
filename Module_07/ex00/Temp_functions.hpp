#ifndef TEMP_FUNCTIONS_HPP
#define TEMP_FUNCTIONS_HPP

#include <iostream>

template< typename T>
void   swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template< typename T>
const T&    min(T const &a, T const &b)
{
    if(a < b)
        return(a);
    return(b);
}

template< typename T>
const T&    max(T const &a, T const &b)
{
    if(a > b)
        return(a);
    return(b);
}








#endif