/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:41:31 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 13:30:36 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << "WrongAnimal Type constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy constructor called." << std::endl;
	*this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &assign)
{
	std::cout << "WrongAnimal Assignation operator called." << std::endl;
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
}

//Getters
std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

//Member function
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
