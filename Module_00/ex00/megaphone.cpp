#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
    else
    {
        std::string str;
        int i = 1;
        int j;
        j = 0;
        while(i <= (ac - 1))
        {
            str = av[i];
            for(j = 0; j < (int)str.size(); j++)
                str[j] = toupper(str[j]);
            std::cout << str;
            i++;
        }
    }
    std::cout << std::endl;
}
