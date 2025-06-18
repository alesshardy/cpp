/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:46:29 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:14:49 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGuardGate = false;
	this->_scavEnergyPoints = this->_energyPoints;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGuardGate = false;
	this->_scavEnergyPoints = this->_energyPoints;
	std::cout << "ScavTrap Named constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &assign)
{
	std::cout << "ScavTrap: Assignation operator called" << std::endl;
	if (this != &assign)
	{
		ClapTrap::operator=(assign);
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

//Getters
bool	ScavTrap::getIsGuardGate(void) const
{
	return (this->_isGuardGate);
}

//Public functions
void	ScavTrap::attack(const std::string &target)
{
	{
		if (this->_hitPoints <= 0)
		{
			std::cout << "ScavTrap " << this->_name << " is already dead!" << std::endl;
			return ;
		}
		if (this->_energyPoints <= 0)
		{
			std::cout << "ScavTrap " << this->_name << "is out of energy for attack!" << std::endl;
			return ;
		}
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->_isGuardGate == false)
	{
		this->_isGuardGate = true;
		std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode!" << std::endl;
	}
	else
	{
		this->_isGuardGate = false;
		std::cout << "ScavTrap " << this->_name << " is not in Gate keeper mode anymore!" << std::endl;
	}
}

