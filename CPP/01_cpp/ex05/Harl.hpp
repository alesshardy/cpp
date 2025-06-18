/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:38:08 by apintus           #+#    #+#             */
/*   Updated: 2024/11/15 13:37:27 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
			void	_debug(void);
			void	_info(void);
			void	_warning(void);
			void	_error(void);

	public:
			Harl(void);
			~Harl(void);
			void	complain(std::string level);
};

#endif
