/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:05 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 13:31:11 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &assign)
{
	std::cout << "Dog Assignation operator called." << std::endl;
	if (this != &assign)
		this->_type = assign.getType();
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called." << std::endl;
}

//Member function
void	Dog::makeSound() const
{
	std::cout << "OUAF OUAF!" << std::endl;
}
