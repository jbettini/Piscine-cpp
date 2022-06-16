#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
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
        void    init_contact(void);

};

#endif