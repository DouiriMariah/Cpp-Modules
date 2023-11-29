#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int grade_to_sign;
        const int grade_to_exec;
    public:
        Form();
        Form(std::string nami, int s, int e);
        Form(Form const& copy);
        Form& operator=(Form const& src);
        ~Form();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Form :: Grade is too high");
                };
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return("Form :: Grade is too low");
                };
        };
        int grade_sign() const;
        int grade_exec() const;
        std::string getName() const;
        bool check_sign() const;
        void beSigned(Bureaucrat &src);
        bool signature(int grade);
} ;

std::ostream& operator << (std :: ostream& o, Form const& i);




#endif