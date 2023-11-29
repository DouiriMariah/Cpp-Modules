#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(char *av)
{
    double final_value = 0;
    std::string buff;
    std::string tmp;
    std::ifstream file;
    file.open("data.csv", std::ios::in);
    if (!file)
    {
        std::cerr << "Error opening data.csv file\n";
        return;
    }
    getline(file, buff);
    while (getline(file, buff))
    {
        std::stringstream ss(buff);
        getline(ss, tmp, ',');
        ss >> final_value;
        stockX.insert(std::pair<std::string, double>(tmp, final_value));
    }
    check_file(av);
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &src)
{
    (void)src;
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    stockX.clear();
}

double BitcoinExchange::check_value(std::string value)
{
    std::stringstream ss;
    double final_value = 0;
    int i = -1;
    int v = 0;
    while (value[++i])
    {
        if(value[i]  == '.' && isdigit(value[i - 1]) && isdigit(value[i + 1]))
            v++;
        else if(value[i] == '.')
            v = 2;
        if (!(isdigit(value[i])) && !((value[i] == '+' || value[i] == '-' ) && i == 0) && !(v < 2))
            return (std::cout << " Error in the line(val)\n", -1);
    }
    ss << value;
    ss >> final_value;
    if (final_value < 0 || final_value > 1000)
        return (std::cout << "Error with the value\n", -1);
    return (final_value);
}

bool BitcoinExchange::check_file(char *file)
{
    std::ifstream is;
    is.open(file, std::ios::in);
    if (!is)
        return(std::cerr << "Error opening file\n", false);
    std::string buff;
    getline(is, buff);
    if(buff.empty())
        return (std::cout << "Empty file\n", false);
    while (getline(is, buff))
    {
        std::istringstream tmp(buff);
        std::string date;
        std::string sep;
        std::string value;
        double val;

        if ((buff.find_last_of("|") != 11) || !(tmp >> date >> sep >> value))
        {
            std::cout << "Error in the line " << " => " << buff << std::endl;
            continue;
        }
        else if (!check_valid_date(date))
            continue; // il faut close ici
        else if ((val = check_value(value)) == -1)
            continue;
        else if ((val = calculate(date, val)) == -1)
            continue;
        else
            std::cout << date + " => " + value + " = " << val << std::endl;
    }
    return (true);
}

bool BitcoinExchange::check_valid_date(std::string buff)
{
    int i = 0;
    if ((buff.find('-') == std::string::npos))
        return (std::cout << "Error in the line(date)\n", false);
    i = -1;
    while (buff[++i])
    {
        if (!(isdigit(buff[i])) && (!(buff[i] == '-' && (i == 4 || i == 7))))
            return (std::cout << " Error in the line(date)\n", false);
    }
    std::stringstream ss(buff);
    int year, month, day;
    char delimiter;
    ss >> year >> delimiter >> month >> delimiter >> day;
    if (year < 0 || year > 3000 || month < 0 || month > 12 || day < 0 || day > 31)
        return (std::cout << "Date doesn't exist\n", false);
    return (true);
}

double BitcoinExchange::calculate(std::string date, double value)
{
    double final_value = 0;
    std::map<std::string, double>::iterator it = stockX.find(date);
    if (it == stockX.end())
    {
        it = stockX.lower_bound(date);
        if (it == stockX.begin())
            return (std::cout << " No exchange value for this date\n", -1);
        it--;
    }
    final_value = it->second * value;
    return (final_value);
}