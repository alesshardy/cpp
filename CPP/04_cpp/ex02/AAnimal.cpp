/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:45:17 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 18:16:15 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("AAnimal")
{
	std::cout << "AAnimal Default constructor called." << std::endl;
}

AAnimal::AAnimal(std::string const &type): _type(type)
{
	std::cout << "AAnimal Type constructor called." << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal Copy constructor called." << std::endl;
	*this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &assign)
{
	std::cout << "AAnimal Assignation operator called." << std::endl;
	if (this != &assign)
		this->_type = assign._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called." << std::endl;
}

//Getters
std::string	AAnimal::getType() const
{
	return (this->_type);
}

//Member function
void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sound!" << std::endl;
}
