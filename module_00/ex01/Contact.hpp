/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 06:06:35 by jbettini          #+#    #+#             */
/*   Updated: 2022/06/17 06:06:37 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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