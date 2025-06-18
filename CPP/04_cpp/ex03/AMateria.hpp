/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 18:32:46 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 12:52:01 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
				std::string	_type;

	public:
			AMateria();
			AMateria(std::string const &type);
			AMateria(const AMateria &copy);
			AMateria &operator=(const AMateria &assign);
			virtual ~AMateria();

			const std::string	&getType() const;
			virtual AMateria *clone() const = 0;
			virtual void use(ICharacter &target);
};

#endif
