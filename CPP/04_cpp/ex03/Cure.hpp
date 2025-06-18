/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:28:59 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 13:34:13 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
			Cure();
			Cure(const Cure &copy);
			Cure &operator=(const Cure &assign);
			virtual ~Cure();

			virtual AMateria *clone() const;
			virtual void use(ICharacter &target);
};

#endif
