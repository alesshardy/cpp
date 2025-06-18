/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:24:58 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 14:36:53 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Adress of the string: " << &string << std::endl;
	std::cout << "Adress of the string with pointer: " << stringPTR << std::endl;
	std::cout << "Adress of the string with reference: " << &stringREF << std::endl;

	std::cout << "Value of the string: " << string << std::endl;
	std::cout << "Value of the string with pointer: " << *stringPTR << std::endl;
	std::cout << "Value of the string with reference: " << stringREF << std::endl;

	return (0);
}
