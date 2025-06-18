/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:15:27 by apintus           #+#    #+#             */
/*   Updated: 2024/11/11 15:40:41 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(): _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("")
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret): _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
}

Contact::~Contact()
{
}

//Getters

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}
