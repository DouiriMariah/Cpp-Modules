#include <cstring>
#include <iostream>

int main()
{
    std::string str;
    std::string *stringPTR;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "string's address in memory = ";
    std::cout << &str;
    std::cout << std::endl;
    std::cout << "stringPTR's address stocked = ";
    std::cout << stringPTR;
    std::cout << std::endl;
    std::cout << "stringREF's address stocked = ";
    std::cout << &stringREF;
    std::cout << std::endl;
    std::cout << "string's value = ";
    std::cout << str;
    std::cout << std::endl;
    std::cout << "stringPTR's value = ";
    std::cout << (*stringPTR);
    std::cout << std::endl;
    std::cout << "stringREF's value = ";
    std::cout << stringREF;
    std::cout << std::endl;
    return(0);
}