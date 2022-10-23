#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap(void);

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void);
		int				getHitPoints(void);
		int				getEnergyPoints(void);
		int				getAttackDamage(void);
		void			print(void);


		ClapTrap &		operator=( ClapTrap const & rhs );

	protected:
				std::string _name;
				int 		_hitPoints;
				int 		_energyPoints;
				int 		_attackDamage;
				std::string _class;
};


#endif