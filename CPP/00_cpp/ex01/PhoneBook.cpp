/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:14:38 by apintus           #+#    #+#             */
/*   Updated: 2024/11/11 15:45:36 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _currentContact(0), _oldestContact(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	do
	{
		std::cout << "Enter the first name: " << std::flush;
		if (!std::getline(std::cin, firstName))
			return ;
	} while (!firstName.length());

	do
	{
		std::cout << "Enter the last name: " << std::flush;
		if (!std::getline(std::cin, lastName))
			return ;
	} while (!lastName.length());

	do
	{
		std::cout << "Enter the nick name: " << std::flush;
		if (!std::getline(std::cin, nickName))
			return ;
	} while (!nickName.length());

	do
	{
		std::cout << "Enter the phone number: " << std::flush;
		if (!std::getline(std::cin, phoneNumber))
			return ;
	} while (!phoneNumber.length());

	do
	{
		std::cout << "Enter the darkest secret: " << std::flush;
		if (!std::getline(std::cin, darkestSecret))
			return ;
	} while (!darkestSecret.length());

	Contact newContact(firstName, lastName, nickName, phoneNumber, darkestSecret);

	if (_currentContact < 8)
	{
		_contacts[_currentContact] = newContact;
		_currentContact++;
	}
	else
	{
		_contacts[_oldestContact] = newContact;
		_oldestContact = (_oldestContact + 1) % 8;
	}

	return ;
}

void	PhoneBook::_displayColumn(const std::string &line) const
{
	std::string	text = line;

	if (line.length() > 10)
		text = line.substr(0, 9) + '.';
	std::cout << std::setw(10) << std::right << text << '|';
}

void	PhoneBook::_displayContact(int index) const
{
	std::string	str_i;

	str_i = index + 49;
	_displayColumn(str_i);
	_displayColumn(_contacts[index].getFirstName());
	_displayColumn(_contacts[index].getLastName());
	_displayColumn(_contacts[index].getNickName());
}

void	PhoneBook::_displayAllContacts() const
{
	std::cout << std::setfill('_') << std::setw(44) << "" << std::setfill(' ') << std::endl;
	_displayColumn("Index");
	_displayColumn("First name");
	_displayColumn("Last name");
	_displayColumn("Nick name");
	std::cout << std::endl;
	std::cout << std::setfill('_') << std::setw(44) << "" << std::setfill(' ') << std::endl;

	for (int i = 0; i < _currentContact; i++)
	{
		_displayContact(i);
		std::cout << std::endl;
	}
}

void	PhoneBook::searchContact()
{
	int	index;

	_displayAllContacts();
	while (true)
	{
		std::cout << "Enter the index :" << std::flush;
		std::cin >> index;

		if (std::cin.eof())
			return ;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Enter a valid entry :" << std::endl << std::flush;
		}
		else if (index <= 0 || index > _currentContact)
		{
			std::cout << "Enter a valid Index : " << std::endl << std::flush;
		}
		else
			break ;
	}
	std::cout << "First name : " << _contacts[index - 1].getFirstName() << std::endl;
	std::cout << "Last name : " << _contacts[index - 1].getLastName() << std::endl;
	std::cout << "Nick name : " << _contacts[index - 1].getNickName() << std::endl;
	std::cout << "Phone number : " << _contacts[index - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << _contacts[index - 1].getDarkestSecret() << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
