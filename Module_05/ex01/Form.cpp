#include "Form.hpp"

Form :: Form() : name("Default"), sign(false), grade_to_sign(1), grade_to_exec(2)
{
    std::cout << "Form : Default constructor called\n";
}

Form :: Form(std::string nami, int s, int e) : name(nami), sign(false), grade_to_sign(s), grade_to_exec(e)
{
    std::cout << "Form : Param constructor called\n";
    signature(s);
    signature(e);
}

Form :: Form(Form const &copy) : name(copy.getName()), sign(copy.check_sign()), grade_to_sign(copy.grade_sign()), grade_to_exec(copy.grade_exec())
{
    std::cout << "Form : Copy constructor called\n";
    signature(copy.grade_to_sign);
    signature(copy.grade_to_exec);
}

Form& Form :: operator=(Form const &src)
{
    std::cout << "Form : Assignment operator called\n";
    sign = src.check_sign();
    return(*this);
}

Form :: ~Form()
{
   std::cout << "Form : Destructor called\n"; 
}

std::string Form::getName() const
{
    return(name);
}

int Form::grade_sign() const
{
    return(grade_to_sign);
}

int Form::grade_exec() const
{
    return(grade_to_exec);
}

bool Form::check_sign() const
{
    return(sign);
}

bool Form::signature(int grade)
{
    try
    {
        if(grade < 1)
            throw Form :: GradeTooHighException();
        else if(grade > 150)
            throw Form :: GradeTooLowException();
        else
            return(true);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(false);
    
}

void Form::beSigned(Bureaucrat &src)
{
    if(src.getGrade() <= grade_to_sign)
        sign = true;
    else
    {
        throw Form :: GradeTooLowException();
    }
}

std::ostream& operator<<(std::ostream& o, Form const& i) //bon
{
    std::string final;
    final = "Form information : \n Form's name : " + i.getName() + "\n Grade to exec = ";
    o << final;
    o << i.grade_exec(); 
    o << std::endl << " Grade to sign = ";
    o << i.grade_sign();
    o << std::endl << " Is it signed : ";
    o << i.check_sign() << std::endl;
    return(o);
}
