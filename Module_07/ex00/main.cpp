#include "Temp_functions.hpp"

int main()
{
    int a = 8;
    int b = 8;

    std::cout << "Call max fonction with equal values\n"; 
    std::cout << "a = " << a << " and b = " << b << std::endl;
    std::cout << "Max return value = " << max(a, b) << std::endl;
    std::cout << "Call min fonction with non equal values\n";
    b++;
    std::cout << "a = " << a << " and b = " << b << std::endl;
    std::cout << "Min return value = " << min(a, b) << std::endl;
    std::cout << "Call swap fonction with non equal values\n";
    a--;
    std::cout << "a = " << a << " and b = " << b << std::endl;
    swap(a, b);
    std::cout << "After the swap" << std::endl;
    std::cout << "a = " << a << " and b = " << b << std::endl;
}