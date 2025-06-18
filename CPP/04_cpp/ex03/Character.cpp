/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:58:18 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 16:57:38 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): _name("default")
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_unequipped[i] = NULL;
	}
}

Character::Character(const std::string &name): _name(name)
{
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
		_unequipped[i] = NULL;
	}
}

Character::Character(const Character &copy) : _name(copy._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else
			_inventory[i] = NULL;
		if (copy._unequipped[i])
			_unequipped[i] = copy._unequipped[i]->clone();
		else
			_unequipped[i] = NULL;
	}
}

Character &Character::operator=(const Character &assign)
{
	if (this != &assign)
	{
		_name = assign._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (assign._inventory[i])
				_inventory[i] = assign._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
		{
			if (_unequipped[i])
				delete _unequipped[i];
			if (assign._unequipped[i])
				_unequipped[i] = assign._unequipped[i]->clone();
			else
				_unequipped[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		if (_unequipped[i])
			delete _unequipped[i];
	}
}

//Getter
const std::string	&Character::getName() const
{
	return (_name);
}

//Member functions
void	Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "No materia to equip." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			std::cout << "Materia equipped at index " << i << "." << std::endl;
			return ;
		}
	}
	std::cout << "No space to equip materia." << std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << "No materia at index " << idx << "." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!_unequipped[i])
		{
			_unequipped[i] = _inventory[idx];
			_inventory[idx] = NULL;
			std::cout << "Materia at index " << idx << " unequipped." << std::endl;
			return ;
		}
		std::cout << "No Space to unequip materia." << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	if (!_inventory[idx])
	{
		std::cout << "No materia at index " << idx << "." << std::endl;
		return ;
	}
	_inventory[idx]->use(target);
}
