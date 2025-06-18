/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:38:14 by apintus           #+#    #+#             */
/*   Updated: 2024/11/15 13:39:49 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	input;

	do
	{
		std::cout << "Harl: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (0);
		if (input.compare("EXIT"))
			harl.complain(input);
	} while (input.compare("EXIT"));
	
	return (0);
}
