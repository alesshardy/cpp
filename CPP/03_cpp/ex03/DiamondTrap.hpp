/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:59:23 by apintus           #+#    #+#             */
/*   Updated: 2024/11/26 15:49:08 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
			std::string	_name;

	public:
			DiamondTrap(void);
			DiamondTrap(std::string name);
			DiamondTrap(const DiamondTrap &copy);
			DiamondTrap &operator=(const DiamondTrap &assign);
			~DiamondTrap(void);

			void	whoAmI();

			using ScavTrap::attack;
};

#endif

