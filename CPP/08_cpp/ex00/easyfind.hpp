/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:11:00 by apintus           #+#    #+#             */
/*   Updated: 2025/01/10 16:37:39 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class ValueNotFoundException : public std::exception
{
	public:
			virtual const char* what() const throw()
			{
				return ("Value not found in container");
			}
};

template <typename T>
void	easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it != container.end())
		std::cout << "Value " << value << " found" << std::endl;
	else
		throw ValueNotFoundException();
}
	
#endif