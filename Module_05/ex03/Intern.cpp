#include "Intern.hpp"

Intern :: Intern()
{
    std::cout << "Intern : Default constructor called\n";
}

Intern :: Intern(Intern const &copy) 
{
    std::cout << "Intern : Copy constructor called\n";
    (*this) = copy;
}

Intern& Intern :: operator=(Intern const &src)
{
    std::cout << "Intern : Assignment operator called\n";
    (void)src;
    return(*this);
}

Intern :: ~Intern()
{
   std::cout << "Intern : Destructor called\n"; 
}

Form* Intern::makeForm(std::string name, std::string target)
{
    Form		*tab[3];

	tab[0] = new ShrubberyCreationForm(target);
	tab[1] = new RobotomyRequestForm(target);
	tab[2] = new PresidentialPardonForm(target);
	
	for(int i = 0; i < 3; i++)
	{
		if (name == tab[i]->getName())
        {
            for(int j = 0; j < 3; j++)
            {
                if(j != i)
                    delete(tab[j]);
            }
            std::cout << "Intern creates " << tab[i]->getName() << std::endl;
			return (tab[i]);
        }
	}
    for(int j = 0; j < 3; j++)
    {
        delete(tab[j]);
    }
    throw Intern :: None();
    return(NULL);
}