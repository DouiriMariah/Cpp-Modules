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

void Bureaucrat::signForm(Form &src)
{
    try
    {
        src.beSigned(*this);
        if(src.check_sign() == true)
            std::cout << getName() << " signed " << src.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << getName() << " couldn't signed " << src.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const& src) const
{
    if(src.check_sign() && grade <= src.grade_exec())
        std::cout << this->getName() << " executed " << src.getName() << std::endl;
    else
        std::cout << this->getName() << " can't execute " << src.getName() << std::endl; 
}