/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:31:14 by apintus           #+#    #+#             */
/*   Updated: 2024/10/22 16:36:20 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
	private:
			std::string	_type;
	public:
			Weapon(std::string type);
			~Weapon(void);
			const std::string	&getType() const;
			void				setType(std::string type);
};


#endif
