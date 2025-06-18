/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:11:35 by apintus           #+#    #+#             */
/*   Updated: 2024/11/25 17:19:46 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			FragTrap &operator=(const FragTrap &assign);
			~FragTrap(void);

			void	highFivesGuys(void);
};

#endif
