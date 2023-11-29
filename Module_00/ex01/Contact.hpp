#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstring>
#include <iomanip>

class Contact{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        int who;
    public:
        Contact();
        ~Contact();
        char *fill_contact(int index);
        void    print_contact(void);
        int    pre_print(int i);
};

Contact :: Contact()
{
    return;
}

Contact :: ~Contact()
{
    return;
}

#endif