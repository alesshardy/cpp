/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:56:56 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:18:09 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("NoName"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name),  _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Named constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
	std::cout << "ClapTrap Copy constructor called." << std::endl;
	*this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	this->_name = claptrap.getName();
	this->_hitPoints = claptrap.getHitPoints();
	this->_energyPoints = claptrap.getEnergyPoints();
	this->_attackDamage = claptrap.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called." << std::endl;
}

//Getters
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return(this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return(this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return(this->_attackDamage);
}

//Public member functions
void	ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << "is out of energy for attack!" << std::endl;
		return ;
	}
	std::cout << "CalpTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!_hitPoints)
	{
		std::cout << "ClapTrap "  << _name << " is already dead !" << std::endl;
	}
	else if (amount >= _hitPoints)
	{
		std::cout << "ClapTrap "  << _name << " is killed by " << amount << " of damage!" << std::endl;
		_hitPoints = 0;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap "  << _name << " take " << amount << " points of damage! He has now " << _hitPoints << " hit points." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "CalpTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << "is out of energy for repair!" << std::endl;
		return ;
	}
	std::cout << "CalpTrap " << this->_name << " is repaired of " << amount << " points! He has now " << this->_hitPoints + amount << " hit points." << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
}
