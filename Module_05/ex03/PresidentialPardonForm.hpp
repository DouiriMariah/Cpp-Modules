#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const& copy);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& src);
        ~PresidentialPardonForm();
        std::string getTarget() const;
        virtual void mission(Bureaucrat const& src) const;
} ;




#endif