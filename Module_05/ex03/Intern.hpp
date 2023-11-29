#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <new>


class Intern
{
    public:
        Intern();
        Intern(Intern const& copy);
        Intern& operator=(Intern const& src);
        ~Intern();
        class None : public std::exception {
	        public:
		        virtual const char *what(void) const throw()
                {
                    return("Form doesn't exist\n");
                }
	    };
        Form* makeForm(std::string name, std::string target);
};


#endif