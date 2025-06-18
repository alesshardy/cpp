/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:46:41 by apintus           #+#    #+#             */
/*   Updated: 2024/11/22 17:23:12 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
			bool	_isGuardGate;

	public:
			ScavTrap(void);
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &copy);
			ScavTrap &operator=(const ScavTrap &assign);
			~ScavTrap(void);

			void	guardGate(void);
			void	attack(const std::string &target);
			bool	getIsGuardGate(void) const;
};

#endif
