#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
    RobotomyRequestForm(std::string targ);
    RobotomyRequestForm(RobotomyRequestForm const& copy);
    RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
    ~RobotomyRequestForm();
    virtual std::string getTarget() const;
    virtual void mission(Bureaucrat const& src) const;
} ;


#endif