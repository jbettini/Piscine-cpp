/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:36:01 by jbettini          #+#    #+#             */
/*   Updated: 2022/11/02 03:10:20 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_HPP
#define RRF_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
    
    public :
        	RobotomyRequestForm(std::string target);
        	RobotomyRequestForm(RobotomyRequestForm const & src);
            ~RobotomyRequestForm(void);
			
			std::string	getTarget(void);
			virtual void		execAction(Bureaucrat const & b) const ;

            RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

    
    private :
            RobotomyRequestForm(void);
            std::string         _target;
            
};

#endif