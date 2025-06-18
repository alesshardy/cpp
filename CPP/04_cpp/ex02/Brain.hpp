/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:04:20 by apintus           #+#    #+#             */
/*   Updated: 2024/11/27 18:27:58 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
			std::string	_ideas[100];
	public:
			Brain();
			Brain(const Brain &copy);
			Brain &operator=(const Brain &assign);
			virtual ~Brain();

			std::string	getIdea(int i) const;
			void	setIdea(int i, std::string idea);
};

#endif
