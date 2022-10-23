#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap(void);

		void guardGate(void);
		ScavTrap &		operator=( ScavTrap const & rhs );	


	protected:
			int			_mode;
};


#endif