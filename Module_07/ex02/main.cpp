#include "Array.hpp"
#include <ctime>
#include <cstdlib>
#define MAX_VAL 7

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std :: cout << "        Number[i], tmp[i], test[i] must be equal\n";
        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << "number = "<< numbers[i] << std::endl;
            std::cout << "tmp = " << tmp[i] << std::endl;
            std::cout << "test = " << test[i] << std::endl;
        }
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        std::cout << "Test numbers[i] with index = -2\n";
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Test numbers[i] with index = size of max_val\n";
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++) 
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
