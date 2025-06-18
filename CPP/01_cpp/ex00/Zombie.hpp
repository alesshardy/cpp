/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:26:53 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 13:20:50 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
			std::string	_name;

	public:
			Zombie(std::string name);
			~Zombie(void);
			void	announce(void);
};

Zombie		*newZombie(std::string name);
void		randomChump(std::string name);

#endif
