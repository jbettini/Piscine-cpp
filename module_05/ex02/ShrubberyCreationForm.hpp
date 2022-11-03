/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/03 01:39:38 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_HPP
#define SCF_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {
    
    public :
        	ShrubberyCreationForm(std::string target);
        	ShrubberyCreationForm(ShrubberyCreationForm const & src);
            ~ShrubberyCreationForm(void);
			
			std::string	getTarget(void);
			virtual void		execAction(Bureaucrat const & b) const;

            ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

    
    private :
            ShrubberyCreationForm(void);
            std::string         _target;
            
};

#endif