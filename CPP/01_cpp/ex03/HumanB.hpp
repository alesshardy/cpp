/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:07:20 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 14:41:23 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
			std::string		_name;
			Weapon			*_weapon;
			
	public:
			HumanB(std::string name);
			~HumanB (void);
			void	setWeapon(Weapon &weapon);
			void	attack(void) const;
};
