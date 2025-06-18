/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:14:23 by apintus           #+#    #+#             */
/*   Updated: 2024/11/11 15:46:34 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	phoneBook;
	std::string	command;

	while (1)
	{
		if (std::cin.eof())
			return (1);
		std::cout << "Enter a command " << std::flush;
		if (!std::getline(std::cin, command))
			return (0);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
	}
	return (0);
}
