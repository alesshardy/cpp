/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:52:36 by apintus           #+#    #+#             */
/*   Updated: 2024/11/29 15:37:32 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
			std::string	_name;
			AMateria	*_inventory[4];
			AMateria	*_unequipped[4];

	public:
			Character();
			Character(const std::string &name);
			Character(const Character &copy);
			Character &operator=(const Character &assign);
			virtual ~Character();

			const std::string &getName() const;
			void	equip(AMateria *m);
			void	unequip(int	idx);
			void	use(int idx, ICharacter &target);
};

#endif
