/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:14:54 by apintus           #+#    #+#             */
/*   Updated: 2024/11/11 15:01:30 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <limits>

class PhoneBook
{
	private:
			void	_displayAllContacts() const;
			void	_displayContact(int	index) const;
			void	_displayColumn(const std::string &line) const;

			int		_currentContact;
			int		_oldestContact;
			Contact	_contacts[8];

	public:
			PhoneBook();
			~PhoneBook();

			void	addContact();
			void	searchContact();
};

#endif
