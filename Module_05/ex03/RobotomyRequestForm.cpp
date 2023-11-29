#include "RobotomyRequestForm.hpp"

RobotomyRequestForm :: RobotomyRequestForm(std::string targ) : Form("RobotomyRequestForm", 72, 45), target(targ)
{
    std::cout << "RobotomyRequestForm : Default constructor called\n";
}

RobotomyRequestForm :: RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy), target(copy.getTarget())
{
    std::cout << "RobotomyRequestForm : Copy constructor called\n";
    // signature(copy.grade_to_sign);
    // signature(copy.grade_to_exec);
}

RobotomyRequestForm& RobotomyRequestForm :: operator=(RobotomyRequestForm const &src)
{
    std::cout << "RobotomyRequestForm : Assignment operator called\n";
    target = src.getTarget();
    this->Form::operator=(src);
    return(*this);
}

RobotomyRequestForm :: ~RobotomyRequestForm()
{
   std::cout << "RobotomyRequestForm : Destructor called\n"; 
}

std::string RobotomyRequestForm::getTarget() const
{
    return(target);
}

void RobotomyRequestForm:: mission(Bureaucrat const& src) const
{
    std::cout << "Drrr... Drrrr... Drrrrrrrrrrrrrrrr!" << std::endl;
    srand(time(NULL));
	std::cout << (rand() % 2 ? " has been successfully robotomized\n" : "The operation failed\n");
    src.executeForm(*this);

}