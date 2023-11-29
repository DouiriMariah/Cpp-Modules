#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm :: ShrubberyCreationForm(std::string targ) : Form("ShrubberyCreationForm", 145, 137), target(targ)
{
    std::cout << "ShrubberyCreationForm : Default constructor called\n";
}

ShrubberyCreationForm :: ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy), target(copy.getTarget())
{
    std::cout << "ShrubberyCreationForm : Copy constructor called\n";
    // signature(copy.grade_to_sign);
    // signature(copy.grade_to_exec);
}

ShrubberyCreationForm& ShrubberyCreationForm :: operator=(ShrubberyCreationForm const &src)
{
    std::cout << "ShrubberyCreationForm : Assignment operator called\n";
    target = src.getTarget();
    this->Form::operator=(src);
    return(*this);
}

ShrubberyCreationForm :: ~ShrubberyCreationForm()
{
   std::cout << "ShrubberyCreationForm : Destructor called\n"; 
}

std::string ShrubberyCreationForm::getTarget() const
{
    return(target);
}

void ShrubberyCreationForm :: mission(Bureaucrat const& src) const
{
	std::string file = target + "_shrubbery";
	std::ofstream tree(file.c_str());
    tree <<"        ##         " << std::endl;
    tree <<"       ####         " << std::endl;
    tree <<"      ######         " << std::endl;
    tree <<"     ########           " << std::endl;
    tree <<"    ##########           " << std::endl;
    tree <<"   ############           " << std::endl;
    tree <<"  ##############           " << std::endl;
    tree <<" ################          " << std::endl;
    tree <<"##################           " << std::endl;
    tree <<"       | |            #      " << std::endl;
    tree <<"       | |           ###       " << std::endl;
    tree <<"       | |          #####       " << std::endl;
    tree <<"       | |            |       " << std::endl;
    tree <<"+++++++++++++++++++++++++++++"<< std::endl;
    src.executeForm(*this);
}