/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:39:03 by apintus           #+#    #+#             */
/*   Updated: 2025/02/17 16:33:06 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout << "=== Création des animaux ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << "=== Utilisation des animaux ===" << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << std::endl;

	std::cout << "=== Destruction des animaux ===" << std::endl;
	delete j;
	delete i;
	std::cout << std::endl;

	std::cout << "=== Tests supplémentaires ===" << std::endl;

	std::cout << "=== Création d'un tableau d'animaux ===" << std::endl;
	Animal* animals[4];
	for (int i = 0; i < 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = 2; i < 4; ++i) {
		animals[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << "=== Utilisation des animaux dans le tableau ===" << std::endl;
	for (int i = 0; i < 4; ++i) {
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	std::cout << "=== Destruction des animaux dans le tableau ===" << std::endl;
	for (int i = 0; i < 4; ++i) {
		delete animals[i];
	}
	std::cout << std::endl;

	std::cout << "=== Test du constructeur de copie ===" << std::endl;
	Dog originalDog;
	Dog copyDog(originalDog);
	originalDog.makeSound();
	copyDog.makeSound();
	std::cout << std::endl;

	std::cout << "=== Test de l'opérateur d'affectation ===" << std::endl;
	Cat originalCat;
	Cat assignedCat;
	assignedCat = originalCat;
	originalCat.makeSound();
	assignedCat.makeSound();
	std::cout << std::endl;

	std::cout << "=== Test de la classe Brain ===" << std::endl;
	Dog dogWithBrain;
	dogWithBrain.getBrain()->setIdea(0, "TOUT CASSER!");
	dogWithBrain.getBrain()->setIdea(1, "VA CHERCHER!");
	std::cout << "Dog's first idea: " << dogWithBrain.getBrain()->getIdea(100) << std::endl;
	std::cout << "Dog's second idea: " << dogWithBrain.getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	std::cout << "=== Test de la copie de Brain ===" << std::endl;
	Dog anotherDogWithBrain(dogWithBrain);
	std::cout << "Another dog's first idea: " << anotherDogWithBrain.getBrain()->getIdea(0) << std::endl;
	std::cout << "Another dog's second idea: " << anotherDogWithBrain.getBrain()->getIdea(1) << std::endl;
	std::cout << std::endl;

	return 0;
}
