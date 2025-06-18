/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:57:05 by apintus           #+#    #+#             */
/*   Updated: 2024/11/21 18:44:52 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
			std::string		_name;
			unsigned int	_hitPoints;
			unsigned int	_energyPoints;
			unsigned int	_attackDamage;

	public:
			ClapTrap(void);
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap &claptrap);
			ClapTrap &operator=(const ClapTrap &claptrap);
			~ClapTrap(void);

			void	attack(const std::string &target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

			std::string		getName(void) const;
			unsigned int 	getHitPoints(void) const;
			unsigned int	getEnergyPoints(void) const;
			unsigned int	getAttackDamage(void) const;
};

#endif
