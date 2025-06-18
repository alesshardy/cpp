/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:05 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 14:22:05 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog Copy constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog &Dog::operator=(const Dog &assign)
{
	std::cout << "Dog Assignation operator called." << std::endl;
	if (this != &assign)
	{
		this->_type = assign.getType();
		delete this->_brain;
		this->_brain = new Brain(*assign.getBrain());
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
	delete this->_brain;
}

//Member function
void	Dog::makeSound() const
{
	std::cout << "OUAF OUAF!" << std::endl;
}

//Getters
Brain	*Dog::getBrain() const
{
	return (this->_brain);
}
