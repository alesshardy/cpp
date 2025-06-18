/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:56:41 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:12:15 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	jack("Jack");
	ClapTrap	jackclone = jack;
	ClapTrap	badguys[5];

	jack.attack("Ennemy"); // 1st attack
	jack.attack(badguys[0].getName()); // 2nd attack
	jack.attack(badguys[1].getName()); // 3rd attack
	jack.attack(badguys[2].getName()); // 4th attack
	jack.attack(badguys[3].getName()); // 5th attack
	jack.attack(badguys[4].getName()); // 6th attack
	jack.attack("Ennemy"); // 7th attack
	jack.attack("Ennemy"); // 8th attack
	jack.attack("Ennemy"); // 9th attack
	jack.attack("Ennemy"); // 10th attack
	jack.attack("Ennemy"); // out of energy
	jack.takeDamage(9); // 1 hp left
	jack.attack("Ennemy"); // out of energy
	jack.takeDamage(1); // 0 hp left
	jack.attack("Ennemy"); // already dead
	jackclone.attack("Ennemy"); // 1st attack
	jack.beRepaired(10); // already dead
	return (0);
}
