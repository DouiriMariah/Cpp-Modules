#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat top;
    PresidentialPardonForm a("Mariah");
    ShrubberyCreationForm b("Shanks");
    RobotomyRequestForm c("Madara");

    try
    {
        std::cout << top;
        std::cout << a;
        top.signForm(a);
        a.execute(top);
        top.checkgrade(150);
        top.signForm(b);
        b.execute(top);
        std :: cout << c;
        top.checkgrade(6);
        top.signForm(b);
        b.execute(top);
        top.signForm(c);
        c.execute(top);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);

}