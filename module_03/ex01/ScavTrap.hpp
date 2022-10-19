#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <iostream>
# include <string>

class ScavTrap
{

	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap(void);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void);
		int				getHitPoints(void);
		int				getEnergyPoints(void);
		int				getAttackDamage(void);


		ScavTrap &		operator=( ScavTrap const & rhs );

	private:
				std::string _name;
				int _hitPoints;
				int _energyPoints;
				int _attackDamage;
};


#endif