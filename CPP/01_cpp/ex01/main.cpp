/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:09:02 by apintus           #+#    #+#             */
/*   Updated: 2024/10/21 18:11:18 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define ZOMBIE_COUNT 5

int main (void)
{
	Zombie *horde = zombieHorde(ZOMBIE_COUNT, "Zombie");

	for (int i = 0; i < ZOMBIE_COUNT; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
