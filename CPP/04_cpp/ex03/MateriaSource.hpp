/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:52:42 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 13:59:00 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
			AMateria	*_inventory[4];

	public:
			MateriaSource();
			MateriaSource(const MateriaSource &copy);
			MateriaSource &operator=(const MateriaSource &assign);
			virtual ~MateriaSource();

			virtual void learnMateria(AMateria *m);
			virtual AMateria *createMateria(const std::string &type);
};

#endif
