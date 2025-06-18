/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:42:48 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 14:41:26 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
			std::string		_name;
			Weapon			&_weapon;
			
	public:
			HumanA(std::string name, Weapon &weapon);
			~HumanA(void);
			void	attack(void) const;
};
