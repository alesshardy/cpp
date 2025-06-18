/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:14 by apintus           #+#    #+#             */
/*   Updated: 2024/11/26 18:18:15 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
			Dog();
			Dog(const Dog &copy);
			Dog &operator=(const Dog &assign);
			virtual ~Dog();

			virtual void	makeSound() const;
};

#endif
