#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
typename T::iterator    easyfind(T & a, int const & b)
{
    return(std::find( a.begin(), a.end(), b));
};

#endif