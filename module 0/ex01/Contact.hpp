#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact {

    public :
        Contact(void);
        ~Contact(void);
        
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

    private :
        void        init_contact(void);
        void        print_contact(void) const;

};

#endif