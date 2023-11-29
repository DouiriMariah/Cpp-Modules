#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat	Ministre(1,"Al");
	    Intern	steve;
	    Form	*form;

	    std::cout << std::endl << std::endl << std::endl;

	    form = steve.makeForm("PresidentialPardonForm", "Mr J");
	    steve.makeForm("invalid", "Mr J");
    
	    std::cout << std::endl << std::endl << std::endl;
    
	    Ministre.signForm(*form);
	    Ministre.executeForm(*form);
        delete(form);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);
}