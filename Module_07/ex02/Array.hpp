#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
    public:
        Array() : _len(0), _tab(NULL) {}
        Array(unsigned int n)
        {
            _len = n;
            _tab = new T[n];
        }
        Array(Array const &copy)
        {
            this->_tab = NULL;
            *this = copy;
        }
        Array& operator=(Array const &src)
        {
            this->_len = src.size();
            delete[] this->_tab;
            this->_tab = new T[this->_len];
            for(unsigned int i = 0; i < this->_len; i++)
            {
                this->_tab[i] = src._tab[i];
            }
            return(*this);
        }
        ~Array()
        {
            delete[](_tab);
        }
        T& operator[](unsigned int index)
        {
            // try
            // {
                if(index >= this->_len || this->_tab == NULL || index < 0)
                {
                    throw Exception();
                }
            // }
            // catch(std::exception  &e)
            // {
            //     std::cout << e.what() << std::endl;
            // }
            return(this->_tab[index]);
        }
        unsigned int size() const
        {
            return(this->_len);
        }
        class Exception : public std::exception
        {
            public :
                virtual const char* what() const throw()
                {
                    return("Invalid element");
                };
        };
    private:
        unsigned int _len;
        T *_tab;
};














#endif