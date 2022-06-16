#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include "Contact.hpp"

class PhoneBook {

    public :
        PhoneBook(void);
        ~PhoneBook(void);
        Contact ContactList[8];
        void    add_contact(int i);
        void    print_contact(void) const;
        void    seach_contact(void) const;

};

#endif