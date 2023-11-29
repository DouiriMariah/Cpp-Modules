#include "Span.hpp"

int main()
{
    std::cout << "              Test of the subject\n";
    Span sp = Span(10);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addRange(4, 12);
    for(unsigned int i = 0; i < sp.get_limit() - 1 ; i++)
        std::cout << sp.display(i) << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    {
    std::cout << "              Test with 10 000 numbers\n";
        Span s(10000);

        s.addNumber(1);
        s.addRange(9998, 4);
        s.addNumber(9);
        std::cout << "First number = ";
        std::cout << s.display(0) << std::endl;
        std::cout << "Between First-Last number : ";
        for(int i = 1; i < 5; i++)
            std::cout << s.display(i) << std::endl;
        std::cout << "Last number = ";
        std::cout << s.display(9999) << std::endl;
    }
    try
    {
        std::cout << "              Test when the stock of numbers is empty\n";
        Span b = Span(0);
        b.shortestSpan();
        b.longestSpan();

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "              Test when the stock is full\n";
    sp.addRange(2, 1);
    return(0);
}