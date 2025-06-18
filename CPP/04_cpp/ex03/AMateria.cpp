/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:50:31 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 12:51:37 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): _type("default")
{
	// std::cout << "AMateria Default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type): _type(type)
{
	// std::cout << "AMateria Type constructor called." << std::endl;
}

AMateria::AMateria(AMateria const &copy)
{
	// std::cout << "AMateria Copy constructor called." << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &assign)
{
	// std::cout << "AMateria Assignation operator called." << std::end;
	if (this != &assign)
		this->_type = assign._type;
	return (*this);
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor called." << std::endl;
}

//Getter
const std::string	&AMateria::getType() const
{
	return (this->_type);
}

//Member function
void	AMateria::use(ICharacter &target)
{
	(void)target;
}
