#include "Data.hpp"

int main()
{
    Data *a = new Data;
    Data *b = NULL;
    uintptr_t c;

    std::cout << "Init struct and uintptr test\n";
    a->final = 1;
    a->name = "bon";
    c = 89;
    std::cout << "Uintptr test before Serialize\n";
    std::cout << c << std::endl;
    c = serialize(a);
    std::cout << "Uintptr test after Serialize\n";
    std::cout << c << std::endl;
    std::cout << "Data *sample before Deserialize\n";
    std::cout << b << std::endl;
    b = deserialize(c);
    std::cout << "Data *sample after Deserialize\n";
    std::cout << b << std::endl;
    std::cout << "Change value in Data *sample\n";
    b->final = 76;
    std::cout << "val = ";
    std::cout << b->final << std::endl;
    delete a;
}