#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Contact {

    public :
        Contact(void);
        ~Contact(void);
        void                init_contact(void);
        void                print_private_var(int i) const;
        void                print_private_contact(void) const;

    private :
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

};

#endif