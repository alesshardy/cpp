/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 12:43:01 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 13:03:33 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
			WrongCat();
			WrongCat(const WrongCat &copy);
			WrongCat &operator=(const WrongCat &assign);
			virtual ~WrongCat();

			void	makeSound() const;
};

#endif
