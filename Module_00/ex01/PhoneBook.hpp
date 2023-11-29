#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>
#include <cstring>
#include <iomanip>

class PhoneBook
{
    private:
        int index;
        Contact contact[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void addi();
        void search_contact();
};

PhoneBook :: PhoneBook()
{
    index = 0;
}

PhoneBook :: ~PhoneBook()
{
    return;
}

#endif