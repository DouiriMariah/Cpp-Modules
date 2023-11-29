#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>
#include <map>
#include <algorithm>

class BitcoinExchange
{
    private:
        std::map<std::string, double> stockX;
    public:
        BitcoinExchange(char *av);
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange& operator=(BitcoinExchange const &src);
        ~BitcoinExchange();

        double check_value(std::string value);
        bool check_valid_date(std::string buff);
        bool check_file(char *file);
        double calculate(std::string date, double value);


};


#endif