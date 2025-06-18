/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:16 by apintus           #+#    #+#             */
/*   Updated: 2024/10/23 16:41:04 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>

class Sed
{
	private:
			std::string		_filename;
			std::ifstream	_in;
	public:
			Sed(std::string filename);
			~Sed(void);
			void	replace(std::string s1, std::string s2);
};

#endif
