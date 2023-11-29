#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
    ShrubberyCreationForm(std::string targ);
    ShrubberyCreationForm(ShrubberyCreationForm const& copy);
    ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
    ~ShrubberyCreationForm();
    virtual std::string getTarget() const;
    virtual void mission(Bureaucrat const& src) const;
} ;



#endif