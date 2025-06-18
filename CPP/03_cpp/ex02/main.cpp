/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:56:41 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 14:40:16 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "=== Creation d'un objet FragTrap avec le constructeur par defaut ===" << std::endl;
	FragTrap	defaultFrag;
	std::cout << std::endl;

	std::cout << "=== Creation d'un objet FragTrap avec un nom ===" << std::endl;
	FragTrap	namedFrag("Babiboi");
	std::cout << std::endl;

	std::cout << "=== Utilisation du constructeur de copie ===" << std::endl;
	FragTrap	copieFrag(namedFrag);
	std::cout << std::endl;

	std::cout << "=== Test de l'operateur d'assignation ===" << std::endl;
	std::cout << defaultFrag.getName() << std::endl;
	defaultFrag = copieFrag;
	std::cout << defaultFrag.getName() << std::endl;
	std::cout << std::endl;

	std::cout << "=== Test de la methode attack ===" << std::endl;
	namedFrag.attack("JAck");
	defaultFrag.attack("JAck");
	std::cout << std::endl;

	std::cout << "=== Test de la methode takeDamage ===" << std::endl;
	namedFrag.takeDamage(9);
	namedFrag.takeDamage(1);
	std::cout << std::endl;

	std::cout << "=== Test de la methode beRepaired ===" << std::endl;
	namedFrag.beRepaired(10);
	std::cout << std::endl;

	std::cout << "=== Test de la methode highFivesGuys ===" << std::endl;
	namedFrag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "=== Affichage des attributs pour verifier les valeurs ===" << std::endl;
	std::cout << "FragTrap " << namedFrag.getName() << " has " << namedFrag.getHitPoints() << " hit point, "
					<< namedFrag.getEnergyPoints() << " energy points, and " << namedFrag.getAttackDamage() << " attack damage." << std::endl;

	return (0);
}
