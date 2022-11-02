/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/02 05:22:17 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPF_HPP
#define PPF_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
    
    public :
        	PresidentialPardonForm(std::string target);
        	PresidentialPardonForm(PresidentialPardonForm const & src);
            ~PresidentialPardonForm(void);
			
			std::string	getTarget(void);
			void		execAction(Bureaucrat const & b);

            PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

    
    private :
            PresidentialPardonForm(void);
            std::string         _target;
            
};

#endif