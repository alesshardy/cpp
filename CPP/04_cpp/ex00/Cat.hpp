/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:18 by apintus           #+#    #+#             */
/*   Updated: 2024/11/26 18:09:35 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
			Cat();
			Cat(const Cat &copy);
			Cat &operator=(const Cat &assign);
			virtual ~Cat();

			virtual void	makeSound() const;
};

#endif
