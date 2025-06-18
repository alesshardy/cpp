/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:42:41 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 13:22:45 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
	std::cout << "WrongCat Copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	std::cout << "WrongCat Assignation operator called." << std::endl;
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WringCat Destructor called." << std::endl;
}

//Member function
void	WrongCat::makeSound() const
{
	std::cout << "WrongMiaouuu !" << std::endl;
}
