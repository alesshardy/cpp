/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:09:26 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 14:44:12 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB (std::string name) : _name(name) , _weapon(NULL)
{
	// std::cout << "Appel Constructeur HumanB" << std::endl;
}

HumanB::~HumanB (void)
{
	// std::cout << "Appel Destructeur HumanB" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " has no weapon to attack with" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
