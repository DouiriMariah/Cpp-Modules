#include "Base.hpp"

Base::~Base()
{
    return;
}

Base* generate(void)
{
    Base	*finito;
	int 	rand;
	
	rand = std::time(NULL);
	if (rand % 3 == 0)
		finito = new A;
	else if (rand % 4 == 0)
		finito = new B;
	else
		finito = new C;
	return (finito);
}

void identify(Base *p)
{
    Base *id;

    id = dynamic_cast<A*>(p);
    if(id != NULL)
        std::cout << "The type is the class A\n";
    id = dynamic_cast<B*>(p);
    if(id != NULL)
        std::cout << "The type is the class B\n";
    id = dynamic_cast<C*>(p);
    if(id != NULL)
        std::cout << "The type is the class C\n";
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A Class is the type\n";
    }
    catch(std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B Class is the type\n";
    }
    catch(std::exception &e)
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C Class is the type\n";
    }
    catch(std::exception &e)
    {
    }
    
}

