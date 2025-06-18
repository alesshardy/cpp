/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:26:53 by apintus           #+#    #+#             */
/*   Updated: 2024/11/14 14:41:29 by apintus          ###   ########.fr       */
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
			Zombie(void);
			~Zombie(void);
			void	announce(void);
			void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
