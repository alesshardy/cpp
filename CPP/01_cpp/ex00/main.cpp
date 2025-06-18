/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:25:37 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 13:53:19 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("Foo");
	Zombie	*zombie2 = newZombie("Zombie2");
	zombie->announce();
	zombie2->announce();
	randomChump("Zombie3");
	delete zombie;
	delete zombie2;
	return (0);
}
