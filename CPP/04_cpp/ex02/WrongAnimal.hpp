/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:41:50 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 12:48:52 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
				std::string	_type;
	public:
			WrongAnimal();
			WrongAnimal(std::string const &type);
			WrongAnimal(const WrongAnimal &copy);
			WrongAnimal &operator=(const WrongAnimal &assign);
			virtual ~WrongAnimal();

			std::string	getType() const;
			void	makeSound() const;
};

#endif
