#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a(147, "Mariah");
    Form b("bigbang", 23, 25);

    std::cout << a;
    std::cout << b;
    std::cout << "         Test unfonctionnal\n";
    a.signForm(b);
    std::cout << "         Test fonctionnal\n";
    a.checkgrade(21);
    std::cout << a;
    a.signForm(b);
    

    return(0);

}