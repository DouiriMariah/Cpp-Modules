#include "Myclass.hpp"

int main(int ac, char **av)
{
    if(ac == 2)
    {
        Myclass convertor;
        try
        {
            std::string a = av[1];
            convertor.convert_all(a);
        }
        catch(std::exception &e)
        { 
            std::cout << e.what() << std::endl;
        }
    }
    return(0);
}