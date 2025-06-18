/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:49:09 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 13:49:45 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	// std::cout << " Ice Default construtor called." << std::endl;
}

Ice::Ice(const Ice &copy)
{
	// std::cout << "Ice Copy constructor called" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &assign)
{
	// std::cout << "Ice Assigation operator called." << std::endl;
	if (this != &assign)
		AMateria::operator=(assign);
	return (*this);
}

Ice::~Ice()
{
	// std::cout << "Ice Destructor called." << std::endl;
}

//Member functions
AMateria *Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
