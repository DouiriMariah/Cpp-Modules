#include "Span.hpp"

Span    ::Span(unsigned int index) : max(index){}

Span    ::Span(Span const &copy)
{
    *this = copy;
}

Span&   Span::operator=(Span const &src)
{
    max = src.get_limit();
    stock = src.stock;
    return(*this);
}

unsigned int    Span::get_limit() const
{
    return(max);
}

Span::~Span()
{}

void    Span::addRange(int count, int value)
{
    try
    {
        if(stock.size() + count > max)
            throw No_push();
        else
            stock.insert(stock.end(), count, value);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // std::cout << *end << std::endl;
    //  for(size_t i = 0; i < stock.size() ; i++)
    //     std::cout << stock[i] << std::endl;
    
}

void    Span::addNumber(int const &element)
{
    try
    {
        if(stock.size() == max)
            throw No_push();
        else
            stock.push_back(element);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

unsigned int    Span::shortestSpan()
{
    // try
    // {
        if(stock.size() == 0 || stock.size() == 1)
            throw Invalid();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    int min = 0;

    sort(stock.begin(), stock.end());
    min = stock.back() - stock.front(); 
    for(size_t i = 0; i < stock.size() - 1; i++)
    {
        if(stock[i + 1] - stock[i] < min)
            min = stock[i + 1] - stock[i];
    }
    return((unsigned int)min);
}

unsigned int    Span::longestSpan()
{
    // try
    // {
        if(stock.size() == 0 || stock.size() == 1)
            throw Invalid();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    int max = 0;

    max = *(std::max_element(stock.begin(), stock.end())) - *(std::min_element(stock.begin(), stock.end()));
    // }
    return((unsigned int)max);
}


