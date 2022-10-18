#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		ClapTrap &		operator=( ClapTrap const & rhs );

	private:
				std::string _name;
				int _hitPoints = 10;
				int _energyPoints = 10;
				int _attackDamage = 0;
};


#endif