#include "Bureaucrat.hpp"


Bureaucrat :: Bureaucrat() : name("Default"), grade(1)
{
    std::cout << "Bureaucrat : Default constructor called\n";
}

Bureaucrat :: Bureaucrat(int rang, std::string nami) : name(nami), grade(1)
{
    std::cout << "Bureaucrat : Param constructor called\n";
    checkgrade(rang);
}

Bureaucrat :: Bureaucrat(Bureaucrat const &copy)
{
    std::cout << "Bureaucrat : Copy constructor called\n";
    (*this) = copy;
}

Bureaucrat& Bureaucrat :: operator=(Bureaucrat const &src)
{
    std::cout << "Bureaucrat : Assignment operator called\n";
    checkgrade(src.getGrade());
    return(*this);
}

Bureaucrat :: ~Bureaucrat()
{
   std::cout << "Bureaucrat : Destructor called\n"; 
}

void Bureaucrat:: checkgrade(int rang)
{
    try
    {
        if(rang < 1 || rang > 150)
        {
            if(rang < 1)
                throw Bureaucrat :: GradeTooHighException();
            else
                throw Bureaucrat :: GradeTooLowException();
        }
        else
            grade = rang;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::string Bureaucrat::getName() const
{
    return(name);
}

int Bureaucrat::getGrade() const
{
    return(grade);
}

Bureaucrat &Bureaucrat:: operator ++()
{
    int a;
    a = grade - 1;
    checkgrade(a);
    return(*this);
}

Bureaucrat &Bureaucrat:: operator --()
{
    int a;
    a = grade + 1;
    checkgrade(a);
    return(*this);
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const& i)
{
    std::string final;
    final = i.getName() + ", bureaucrat grade ";
    o << final;
    o << i.getGrade();
    o << std::endl;
    return(o);
}