/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:34:20 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 13:47:02 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	// std::cout << " Cure Default construtor called." << std::endl;
}

Cure::Cure(const Cure &copy)
{
	// std::cout << "Cure Copy constructor called" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &assign)
{
	// std::cout << "Cure Assigation operator called." << std::endl;
	if (this != &assign)
		AMateria::operator=(assign);
	return (*this);
}

Cure::~Cure()
{
	// std::cout << "Cure Destructor called." << std::endl;
}

//Member functions
AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
