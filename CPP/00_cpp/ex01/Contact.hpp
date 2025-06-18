/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:15:21 by apintus           #+#    #+#             */
/*   Updated: 2024/11/11 15:34:08 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact
{
	private:
			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickName;
			std::string	_phoneNumber;
			std::string	_darkestSecret;

	public:
			Contact();
			Contact(std::string fisrtName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkSecret);
			~Contact();

			//Getters
			std::string	getFirstName(void) const;
			std::string	getLastName(void) const;
			std::string	getNickName(void) const;
			std::string	getPhoneNumber(void) const;
			std::string	getDarkestSecret(void) const;
};

#endif
