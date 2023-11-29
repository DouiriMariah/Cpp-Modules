#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a(147, "Mariah");
    Bureaucrat b;

    std::cout << std::endl;
    std::cout << "                 Test 1\n";
    std::cout << "Pre incrementation\n";
    std::cout << a;
    std::cout << "Post incrementation\n";
    std::cout << ++a;
    std::cout << "Change grade to the maximal grade\n";
    a.checkgrade(1);
    std::cout << a;
    std::cout << "Incrementation\n";
    ++a;

    std::cout << std::endl;
    std::cout << "                 Test 2\n";
    std::cout << "Pre decrementation\n";
    std::cout << b;
    std::cout << "Post decrementation\n";
    std::cout << --b;
    std::cout << "Change grade to the maximal grade\n";
    b.checkgrade(150);
    std::cout << b;
    std::cout << "Decrementation\n";
    b.operator--();
    std::cout << b;
    std::cout << std::endl;

    return(0);
}
