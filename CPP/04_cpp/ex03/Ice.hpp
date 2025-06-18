/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:47:49 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 13:48:31 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
			Ice();
			Ice(const Ice &copy);
			Ice &operator=(const Ice &assign);
			virtual ~Ice();

			virtual AMateria *clone() const;
			virtual void use(ICharacter &target);
};

#endif
