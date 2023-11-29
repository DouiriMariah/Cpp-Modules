#include "RPN.hpp"

RPN::RPN(std::string seqi)
{
    seq = seqi;
}

RPN::RPN(RPN const &copy)
{
    *this = copy;
}
RPN& RPN::operator=(RPN const &src)
{
    seq = src.seq;
    rpn = src.rpn; 
    return *this;
}

RPN::~RPN() {}

void RPN::calculate()
{   
    size_t i = -1;
    int x = 0;
    int y = 0;
    while(++i < seq.size())
    {
        if(isdigit(seq[i]))
        {
            rpn.push(seq[i] - '0');
        }
        else if(seq[i] == '+' || seq[i] == '-' || seq[i] == '*' || seq[i] == '/')
        {
            if(rpn.size() < 2)
            {
                std::cout << "RPN impossible\n";
                return;
            }
            x = rpn.top();
            rpn.pop();
            y = rpn.top();
            rpn.pop();
            if(!x)
            {
                std::cout << "Cannot divided by 0\n";
                return;
            }
            switch (seq[i])
            {
            case '+':
                rpn.push(y + x);
                break;
            case '-':
                rpn.push(y - x);
                break;
            case '*' :
                rpn.push(y * x);
                break;
            case '/':
                rpn.push(y / x);
                break;
            }
        }
    }
    if(rpn.size() != 1)
        std::cout << "Not enough operators\n";
    else
        std::cout << "RPN = " << rpn.top() << std::endl;
}