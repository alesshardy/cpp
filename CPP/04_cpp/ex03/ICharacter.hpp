/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:39:56 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 16:26:22 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
			virtual ~ICharacter() {}
			virtual std::string const &getName() const = 0;
			virtual void equip(AMateria *m) = 0;
			virtual void unequip(int idx) = 0;
			virtual void use(int idx, ICharacter &target) = 0;
};

#endif
