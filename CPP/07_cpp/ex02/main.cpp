/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:24:42 by apintus           #+#    #+#             */
/*   Updated: 2025/01/15 15:08:13 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <cstdlib> // Pour rand() et srand()
#include <ctime>   // Pour time()

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

int main()
{
	// Test de création d'un tableau vide
	std::cout << "Test de création d'un tableau vide:" << std::endl;
	Array<int> emptyArray;
	std::cout << "Taille du tableau vide: " << emptyArray.size() << std::endl;

	// Test de création d'un tableau avec une taille donnée et initialisation des valeurs
	std::cout << "\nTest de création d'un tableau avec une taille donnée et initialisation des valeurs:" << std::endl;
	Array<int> intArray(5);
	for (size_t i = 0; i < intArray.size(); i++)
		intArray[i] = i + 1; // Initialisation avec des valeurs différentes de 0
	std::cout << "Taille du tableau: " << intArray.size() << std::endl;
	for (size_t i = 0; i < intArray.size(); i++)
		std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

	// Test de l'opérateur d'indexation avec une exception
	std::cout << "\nTest de l'opérateur d'indexation avec une exception:" << std::endl;
	try
	{
		std::cout << "Accès à intArray[10]: " << intArray[10] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Test du constructeur par copie
	std::cout << "\nTest du constructeur par copie:" << std::endl;
	Array<int> copyArray(intArray);
	std::cout << "Taille du tableau copié: " << copyArray.size() << std::endl;
	for (size_t i = 0; i < copyArray.size(); i++)
		std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;

	// Test de l'opérateur d'affectation
	std::cout << "\nTest de l'opérateur d'affectation:" << std::endl;
	Array<int> assignArray;
	assignArray = intArray;
	std::cout << "Taille du tableau assigné: " << assignArray.size() << std::endl;
	for (size_t i = 0; i < assignArray.size(); i++)
		std::cout << "assignArray[" << i << "] = " << assignArray[i] << std::endl;

	// Test avec un tableau de chaînes de caractères
	std::cout << "\nTest avec un tableau de chaînes de caractères:" << std::endl;
	Array<std::string> strArray(3);
	strArray[0] = "Bonjour";
	strArray[1] = "le";
	strArray[2] = "monde";
	for (size_t i = 0; i < strArray.size(); i++)
		std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;

	return 0;
}