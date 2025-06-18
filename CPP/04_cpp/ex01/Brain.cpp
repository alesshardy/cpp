/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:04:30 by apintus           #+#    #+#             */
/*   Updated: 2025/02/17 16:35:11 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called." << std::endl;
}

Brain::Brain(const Brain &assign)
{
	std::cout << "Brain Copy constructor called." << std::endl;
	*this = assign;
}

Brain &Brain::operator=(const Brain &assign)
{
	std::cout << "Brain Assignation operator called." << std::endl;
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = assign._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called." << std::endl;
}

//Members funtion

std::string	Brain::getIdea(int i) const
{
	// secu
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of range." << std::endl;
		return ("");
	}
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i >= 100)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}

