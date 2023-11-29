#include "PresidentialPardonForm.hpp"

PresidentialPardonForm :: PresidentialPardonForm(std::string targ) : Form("PresidentPardonForm", 25, 5), target(targ)
{
    std::cout << "PresidentialPardonForm : Default constructor called\n";
}

PresidentialPardonForm :: PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy), target(copy.getTarget())
{
    std::cout << "PresidentialPardonForm : Copy constructor called\n";
    // signature(copy.grade_to_sign);
    // signature(copy.grade_to_exec);
}

PresidentialPardonForm& PresidentialPardonForm :: operator=(PresidentialPardonForm const &src)
{
    std::cout << "PresidentialPardonForm : Assignment operator called\n";
    target = src.getTarget();
    this->Form::operator=(src);
    return(*this);
}

PresidentialPardonForm :: ~PresidentialPardonForm()
{
   std::cout << "PresidentialPardonForm : Destructor called\n"; 
}

std::string PresidentialPardonForm::getTarget() const
{
    return(target);
}

void PresidentialPardonForm:: mission(Bureaucrat const& src) const
{
    std::cout << target << " has been forgiven by Zaphod Beeblebrox\n";
    src.executeForm(*this);
}