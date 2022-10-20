#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap(void);

		void guardGate(void);
		ScavTrap &		operator=( ScavTrap const & rhs );	


	private:
			int			_mode;
};


#endif