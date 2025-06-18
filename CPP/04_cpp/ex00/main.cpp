/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:39:03 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 13:27:43 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* iWrong = new WrongCat();

	std::cout << metaWrong->getType() << " " << std::endl;
	std::cout << iWrong->getType() << " " << std::endl;

	iWrong->makeSound();
	metaWrong->makeSound();

	delete meta;
	delete j;
	delete i;
	delete metaWrong;
	delete iWrong;
	return (0);
}
