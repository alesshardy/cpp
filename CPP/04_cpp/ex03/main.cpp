/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 14:07:59 by apintus           #+#    #+#             */
/*   Updated: 2025/02/17 15:05:14 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int main()
{
	std::cout << "=== Initialisation de la source de Materia ===" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "MateriaSource initialisée et Materias apprises." << std::endl;
	std::cout << std::endl;

	std::cout << "=== Création du personnage principal ===" << std::endl;
	ICharacter* me = new Character("me");
	if (me)
		std::cout << "Personnage principal créé: " << me->getName() << std::endl;
	else
		std::cout << "Erreur lors de la création du personnage principal." << std::endl;
	std::cout << std::endl;

	std::cout << "=== Création et équipement des Materias ===" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	if (tmp) {
		me->equip(tmp);
		std::cout << "Materia 'ice' équipée." << std::endl;
	} else {
		std::cout << "Erreur lors de la création de la Materia 'ice'." << std::endl;
	}

	tmp = src->createMateria("cure");
	if (tmp) {
		me->equip(tmp);
		std::cout << "Materia 'cure' équipée." << std::endl;
	} else {
		std::cout << "Erreur lors de la création de la Materia 'cure'." << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Création du personnage secondaire ===" << std::endl;
	ICharacter* bob = new Character("bob");
	if (bob)
		std::cout << "Personnage secondaire créé: " << bob->getName() << std::endl;
	else
		std::cout << "Erreur lors de la création du personnage secondaire." << std::endl;
	std::cout << std::endl;

	std::cout << "=== Utilisation des Materias ===" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	std::cout << "=== Déséquipement des Materias ===" << std::endl;
	me->unequip(0);
	me->unequip(1);
	std::cout << std::endl;

	std::cout << "=== Rééquipement des Materias ===" << std::endl;
	tmp = src->createMateria("ice");
	if (tmp) {
		me->equip(tmp);
		std::cout << "Materia 'ice' rééquipée." << std::endl;
	} else {
		std::cout << "Erreur lors de la création de la Materia 'ice'." << std::endl;
	}

	tmp = src->createMateria("cure");
	if (tmp) {
		me->equip(tmp);
		std::cout << "Materia 'cure' rééquipée." << std::endl;
	} else {
		std::cout << "Erreur lors de la création de la Materia 'cure'." << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Test du constructeur de copie ===" << std::endl;
	Character originalCharacter("original");
	Character copyCharacter(originalCharacter);
	originalCharacter.equip(src->createMateria("ice"));
	originalCharacter.equip(src->createMateria("cure"));
	originalCharacter.use(0, *bob);
	copyCharacter.use(0, *bob);
	std::cout << std::endl;

	std::cout << "=== Test de l'opérateur d'affectation ===" << std::endl;
	Character assignedCharacter("assigned");
	assignedCharacter = originalCharacter;
	assignedCharacter.use(0, *bob);
	assignedCharacter.use(1, *bob);
	std::cout << std::endl;

	std::cout << "=== Nettoyage de la mémoire ===" << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}
