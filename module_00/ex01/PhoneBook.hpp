/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:06:46 by jbettini          #+#    #+#             */
/*   Updated: 2022/06/17 06:06:47 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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