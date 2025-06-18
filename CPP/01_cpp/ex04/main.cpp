/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:18:23 by apintus           #+#    #+#             */
/*   Updated: 2024/11/15 13:34:01 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Make something like: ./Sed <filename> <to_find> <replace>." << std::endl;
		return (1);
	}
	if (std::string (av[2]).empty() || std::string (av[3]).empty())
	{
		std::cerr << "An argument is empty." << std::endl;
		return (1);
	}
	Sed	sed(av[1]);
	sed.replace(av[2], av[3]);
	return (0);
}
