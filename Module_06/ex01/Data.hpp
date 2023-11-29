#ifndef DATA_HPP
#define DATA_HPP

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
    uintptr_t final;
    std::string name;
} Data;

uintptr_t serialize(Data *ptr);
Data* deserialize(uintptr_t raw);

#endif