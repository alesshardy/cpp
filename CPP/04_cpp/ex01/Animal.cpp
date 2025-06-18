/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:45:17 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 18:09:30 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal Default constructor called." << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal Type constructor called." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy constructor called." << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &assign)
{
	std::cout << "Animal Assignation operator called." << std::endl;
	if (this != &assign)
		this->_type = assign._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
}

//Getters
std::string	Animal::getType() const
{
	return (this->_type);
}

//Member function
void	Animal::makeSound() const
{
	std::cout << "Animal sound!" << std::endl;
}
