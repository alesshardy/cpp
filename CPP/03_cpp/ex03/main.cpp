/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:56:41 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:49:47 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	std::cout << "=== Creation d'un objet DiamondTrap avec le constructeur par défaut ===" << std::endl;
	DiamondTrap defaultDiamond;
	std::cout << std::endl;

	std::cout << "=== Creation d'un objet DiamondTrap avec un nom ===" << std::endl;
	DiamondTrap namedDiamond("DIAMOND");
	std::cout << std::endl;

	std::cout << "=== Utilisation du constructeur de copie ===" << std::endl;
	DiamondTrap copiedDiamond(namedDiamond);
	std::cout << std::endl;

	std::cout << "=== Test de l'operateur d'assignation ===" << std::endl;
	defaultDiamond = copiedDiamond;
	std::cout << std::endl;

	std::cout << "=== Test de la methode attack ===" << std::endl;
	namedDiamond.attack("JACK");
	namedDiamond.attack("SIUUU");
	std::cout << std::endl;

	std::cout << "=== Test de la methode takeDamage ===" << std::endl;
	namedDiamond.takeDamage(5);
	namedDiamond.takeDamage(10);
	std::cout << std::endl;

	std::cout << "=== Test de la methode beRepaired ===" << std::endl;
	namedDiamond.beRepaired(3);
	namedDiamond.beRepaired(10);
	std::cout << std::endl;

	std::cout << "=== Test de la methode guardGate ===" << std::endl;
	namedDiamond.guardGate();
	std::cout << std::endl;

	std::cout << "=== Test de la methode highFivesGuys ===" << std::endl;
	namedDiamond.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== Test de la methode whoAmI ===" << std::endl;
	namedDiamond.whoAmI();
	std::cout << std::endl;

	std::cout << "=== Affichage des attributs pour vérifier les valeurs ===" << std::endl;
	std::cout << "DiamondTrap " << namedDiamond.getName() << " has " << namedDiamond.getHitPoints() << " hit points, "
			  << namedDiamond.getEnergyPoints() << " energy points, and " << namedDiamond.getAttackDamage() << " attack damage." << std::endl;
	return (0);
}
