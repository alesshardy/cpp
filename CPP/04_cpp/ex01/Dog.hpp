/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:14 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 14:19:38 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
			Brain	*_brain;

	public:
			Dog();
			Dog(const Dog &copy);
			Dog &operator=(const Dog &assign);
			virtual ~Dog();

			virtual void	makeSound() const;
			Brain	*getBrain() const;
};

#endif
