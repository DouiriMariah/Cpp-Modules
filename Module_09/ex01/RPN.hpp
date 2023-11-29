#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>
#include <map>
#include <algorithm>
#include <cctype>
#include <stack>
#include <cstddef>

class RPN
{
    private:
        std::stack<int> rpn;
        std::string seq;
    public:
        RPN(std::string seqi);
        RPN(RPN const &copy);
        RPN& operator=(RPN const &src);
        ~RPN();

        void calculate();
        // check_sequence(std::string seq);
};









#endif
