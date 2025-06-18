/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:23 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 14:18:05 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Default constructor called." << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat Copy constructor called." << std::endl;
	this->_brain = new Brain();
}

Cat &Cat::operator=(const Cat &assign)
{
	std::cout << "Cat Assignation operator called." << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
		delete this->_brain;
		this->_brain = new Brain(*assign.getBrain());
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called." << std::endl;
	delete this->_brain;
}

//Member function
void	Cat::makeSound() const
{
	std::cout << "Miaouu!" << std::endl;
}

//Getters
Brain	*Cat::getBrain() const
{
	return (this->_brain);
}
