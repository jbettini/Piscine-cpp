#ifndef FragTrap_HPP
# define FragTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap( FragTrap const & src );
		~FragTrap(void);

		void			highFivesGuys(void);
		FragTrap &		operator=( FragTrap const & rhs );	

};


#endif