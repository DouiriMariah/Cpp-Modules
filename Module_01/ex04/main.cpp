#include <fstream>
#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
    if(ac == 1)
        return(0);
    std::string buff;
    std::string final;
    std::ifstream file;
    file.open(av[1]);
    std::ofstream final_file("good.replace");
    size_t index = 0;
    int j = 0;
    while(getline(file, buff))
    {
        while(index != std::string::npos)
        {
            if(index == 0)
                index = buff.find(av[2]);
            else
                index = buff.find(av[2], (index + 1));
            if(index == std::string::npos)
            {
                final = buff.substr(j);
                j = 0;
                index = 0;
                final_file << final;
                final_file << std::endl;
                break;
            }
            else
            {
                final = buff.substr(j, index) + av[3];
                j = index + strlen(av[2]);
                if(!index)
                    index++;
                final_file << final;
            }
        }
    }
    return(0);
}