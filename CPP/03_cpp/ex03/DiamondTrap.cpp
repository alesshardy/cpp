/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:59:35 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:45:54 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor called." << std::endl;
	this->_name = "NoName";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_scavEnergyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap Named constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_scavEnergyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy)
{
	std::cout << "DiamondTrap Copy constructor called." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &assign)
{
	std::cout << "DiamondTrap Assignation operator called." << std::endl;
	if (this != &assign)
	{
		this->_name = assign._name;
		this->_hitPoints = assign._hitPoints;
		this->_energyPoints = assign._energyPoints;
		this->_attackDamage = assign._attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called." << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << this->ClapTrap::getName() << std::endl;
}
