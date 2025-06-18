/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:09:23 by apintus           #+#    #+#             */
/*   Updated: 2024/11/13 12:13:02 by apintus          ###   ########.fr       */
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
