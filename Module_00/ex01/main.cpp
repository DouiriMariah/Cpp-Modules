#include <iostream>
#include <cstring>
#include <iomanip>
#include "PhoneBook.hpp" 
#include "Contact.hpp"
#include <sstream>
#include <cstdlib>

void    Contact::print_contact(void)
{
    std::cout << "First Name : "<< std::endl;
    std::cout<<this->firstname << std::endl;
    std::cout << "Last Name : "<< std::endl;
    std::cout<<this->lastname << std::endl;
    std::cout << "Nick Name : "<< std::endl;
    std::cout<<this->nickname << std::endl;
    std::cout << "Phone Number : "<< std::endl;
    std::cout<<this->phonenumber << std::endl;
    std::cout << "Darkest secret : "<< std::endl;
    std::cout<<this->darkestsecret << std::endl;
    // std::cout<<this->who << std::endl;
}

void    print_rep(std::string str, int i)
{
    if(str.length() >= 10)
    {
        str[9] = '.';
        int o = 9;
        while(str[++o])
            str[o] = '\0';
    }
    std:: cout << std::setw(10); 
    std:: cout << str;
    if(i != 0)
         std:: cout << "|";
    else
        std:: cout << std::endl;
}

int    Contact::pre_print(int i)
{
    if(i == 0)
        i = this->who;
    else
    {
        std:: cout << "|";
        print_rep(this->firstname, 1);
        print_rep(this->lastname, 2);
        print_rep(this->nickname, 0);
    }
    return(i);
}


int    digit_or_not(std::string str)
{
    int i;
    if(str[0] == '\0')
        return(-1);
    for(i = 0; i < (int)str.size(); i++)
    {
        if((!isdigit(str[i])) && (str[0] != '+' || str[0] != '-'))
            return(-1);
    }
    return(0);
}


void    PhoneBook::search_contact()
{
    int i;

    i = 0;
    while(i < this->index)
    {
        std:: cout << std::setw(10); 
        std::cout << (i);
        this->contact[i].pre_print(1);
        i++;
    }
    i = 0;
    std::string buff;
    std::stringstream ss;
    if(this->index != 0)
    {
        std::cout << "which contact : ";
        getline(std::cin, buff);
        if(digit_or_not(buff))
            i = -1;
        else
        {
            ss << buff;
            ss >> i;
        }
        if(!(i >= 0 && i < 8))
            std::cout << "the index must be a digit between 0 and 7" << std::endl;
        else if(i < this->index)
            this->contact[i].print_contact();
        else
            std::cout << "the contact doesn't exist" << std::endl;
    }
    else
        std::cout << "The repertory is empty\n";
}

int    verif_buf(std::string str)
{
    int i;

    i = 0;
    if(str[i] == '\n' || str[i] == '\0')
        return(1);
    while(str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    if(str[i] == '\0')
        return(1);
    return(0);
}


char *Contact :: fill_contact(int index)
{
    int i = 0;
    std::string buf;
    std::cout << "First Name : "<< std::endl;
    getline(std::cin, buf);
    this->firstname = buf;
    i += verif_buf(buf);
    std::cout << "Last Name : "<< std::endl;
    getline(std::cin, buf);
    this->lastname = buf;
    i += verif_buf(buf);
    std::cout << "Nick Name : "<< std::endl;
    getline(std::cin, buf);
    this->nickname = buf;
    i += verif_buf(buf);
    std::cout << "Phone Number : "<< std::endl;
    getline(std::cin, buf);
    this->phonenumber = buf;
    i += verif_buf(buf);
    std::cout << "Darkest secret : "<< std::endl;
    getline(std::cin, buf);
    this->darkestsecret = buf;
    i += verif_buf(buf);
    this->who = index;
    if(i != 0)
    {
        std::cout << "To save a contact in the repertory, you must fill every inputs fields\n";
        return(NULL);
    }
    return((char*)"coefivervb");
}

void    PhoneBook ::addi()
{
    static int index;

    int min[2];
    int who = 0;
    int i = 0;
    Contact to_add;
    if(!to_add.fill_contact(index))
        return;
    if(this->index >= 0 && this->index < 8)
    {
        this->contact[this->index] = to_add;
        this->index++;
    }
    else
    {
        i = 0;
        who = 0;
        min[0] = index;
        min[1] = 0;
        while(i < 8)
        {
            who = this->contact[i].pre_print(0); 
            if((who < index) && (min[0] > who))
            {
                min[0] = who;
                min[1] = i;
            }    
            i++;
        }
        this->contact[min[1]] = to_add;
    }
    // std::cout << index;
    index++;  
}


int main()
{
    PhoneBook repertory;
    std::string arg;

    while(arg != "EXIT")
    {
        getline(std::cin, arg);
        if(std::cin.eof())
        {
            std::cout << "EXIT by ctrl D\n";
            break;
        }
        if(arg == "ADD")
            repertory.addi();
        else if(arg == "SEARCH")
            repertory.search_contact();
    }
    return(0);
}