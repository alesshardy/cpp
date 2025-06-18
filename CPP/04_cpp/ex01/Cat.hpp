/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:46:18 by apintus           #+#    #+#             */
/*   Updated: 2024/11/28 14:14:18 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
			Brain	*_brain;

	public:
			Cat();
			Cat(const Cat &copy);
			Cat &operator=(const Cat &assign);
			virtual ~Cat();

			virtual void	makeSound() const;
			Brain	*getBrain() const;
};

#endif
