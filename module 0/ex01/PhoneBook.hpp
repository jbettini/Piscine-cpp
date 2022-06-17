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
        void    search_contact(void) const;
        void    get_user_output(int i) const;
        
    private :
        static int _number_of_contact;
};

#endif