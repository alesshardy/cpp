/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:45:29 by apintus           #+#    #+#             */
/*   Updated: 2024/11/26 17:52:25 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
				std::string	_type;

	public:
			Animal();
			Animal(std::string const &type);
			Animal(const Animal &copy);
			Animal &operator=(const Animal &assign);
			virtual ~Animal();

			std::string	getType() const;
			virtual void	makeSound() const;
};

#endif
