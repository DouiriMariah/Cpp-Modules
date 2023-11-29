#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t finito;
    finito = reinterpret_cast<uintptr_t>(ptr);
    return(finito);
}

Data* deserialize(uintptr_t raw)
{
    Data *a;

    a = reinterpret_cast<Data *>(raw);
    return(a);
}

