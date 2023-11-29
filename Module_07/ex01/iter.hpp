#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template<typename T>
void    iter(T *a, size_t len, void (*display_tab)(T const &))
{
    for(size_t i = 0; i < len; i++)
        (*display_tab)(a[i]);
}

#endif