/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:45:29 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 18:16:32 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
	protected:
				std::string	_type;

	public:
			AAnimal();
			AAnimal(std::string const &type);
			AAnimal(const AAnimal &copy);
			AAnimal &operator=(const AAnimal &assign);
			virtual ~AAnimal();

			std::string	getType() const;
			virtual void	makeSound() const = 0;
};

#endif
