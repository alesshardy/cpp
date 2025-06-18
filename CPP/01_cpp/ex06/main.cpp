/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:09:29 by apintus           #+#    #+#             */
/*   Updated: 2024/11/13 12:46:37 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;

	if (ac != 2)
	{
		std::cout << "Argument number incorrect" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
