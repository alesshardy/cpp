/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:05 by apintus           #+#    #+#             */
/*   Updated: 2024/12/02 16:17:24 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog")
{
	std::cout << "Dog Default constructor called." << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy): AAnimal(copy)
{
	std::cout << "Dog Copy constructor called." << std::endl;
	this->_brain = new Brain(*copy.getBrain()); // copie profonde
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
