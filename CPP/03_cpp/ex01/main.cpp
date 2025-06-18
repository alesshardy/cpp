/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:56:41 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:21:44 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	jack("Jack");
	ScavTrap	babiboi("Babiboi");

	jack.attack(babiboi.getName()); //1st attack
	babiboi.takeDamage(babiboi.getAttackDamage()); //babiboi has taken 20p damage
	babiboi.attack(jack.getName()); // 1st attack
	jack.takeDamage(babiboi.getAttackDamage()); // Jack has taken 20 points of damage and die
	jack.attack(babiboi.getName()); // 2nd attack already dead
	babiboi.takeDamage(jack.getAttackDamage()); // babiboi has taken 0 points of damage
	babiboi.guardGate(); // babiboi has entered in Gate keeper mode
	jack.attack(babiboi.getName()); // 3rd attack already dead
	babiboi.takeDamage(jack.getAttackDamage()); // babiboi has taken 0 points of damage
	babiboi.guardGate(); // babiboi has exited Gate keeper mode

	return (0);
}
