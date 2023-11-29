#include "Myclass.hpp"

Myclass::Myclass()
{
    _int = 0;
    _char = '\0';
    _float = 0.0f;
    _double = 0.0;
}


Myclass::Myclass(Myclass const &copy)
{
    (*this) = copy;
}

Myclass& Myclass:: operator=(Myclass const &src)
{
    _double = src.get_double_val();
    _char = src.get_char_val();
    _float = src.get_float_val();
    _double = src.get_double_val();
    return(*this);
}

Myclass::~Myclass()
{
    return;
}

int Myclass::get_int_val() const
{
    return(this->_int);
}

char Myclass::get_char_val() const
{
    return(this->_char);
}

float Myclass::get_float_val() const
{
    return(this->_float);
}

double Myclass::get_double_val() const
{
    return(this->_double);
}

void Myclass:: to_char(std::string convert)
{
    std::cout << "char : ";
    try
    {
        if(convert.length() == 1 && isalpha(convert[0]))
        {
            _char = convert[0];
            if(_char < 32 || _char > 126)
                throw Exception_D();
        }
        else
        {
            _char = static_cast<char>(_double);
            if(!std::isfinite(_double) || _double > CHAR_MAX || _double < CHAR_MIN || ((!_double) && (convert.length() != 1)))
                throw Exception_I();
            else if(_double < 32 || _double > 126)
                throw Exception_D();
        }
        std::cout << _char << std::endl;
    }   
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void    Myclass:: to_int()
{
    try
    {   
        std::cout << "int : ";
        if(!std::isfinite(_double) || _double > INT_MAX || _double < INT_MIN || !_double)
            throw Exception_I();
        _int = static_cast<int>(_double);
        std::cout << _int << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


void Myclass::convert_all(const std::string& convert)
{
    _double = atof(convert.c_str());
    to_char(convert);
    if(convert.length() == 1 && convert[0] == '0')
    {
        _int = _double;
        std::cout << "int : " << _int << std::endl;
    }
    else
        to_int();
    
    std::cout << "float : ";
    std::cout << std::fixed << std::setprecision(1);
    _float = static_cast<float>(_double); 
    std::cout << _float << 'f' << std::endl;

    std::cout << "double : ";
    std::cout << std::fixed << std::setprecision(1);
    _double = static_cast<double>(_double);
    std::cout << _double << std::endl;
}