#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(int rang, std::string nami);
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat& operator=(Bureaucrat const &src);
        ~Bureaucrat();
        Bureaucrat& operator ++();
        Bureaucrat& operator--();
        std::string getName() const;
        int getGrade() const;
        void checkgrade(int rang);
        void signForm(Form &src);
        void executeForm(Form const & form) const;
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Grade higher than 1");
                };
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Grade lower than 150");
                };
        };

} ;

std::ostream& operator << (std :: ostream& o, Bureaucrat const& i);

#endif