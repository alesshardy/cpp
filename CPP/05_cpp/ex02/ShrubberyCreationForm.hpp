/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:54:50 by apintus           #+#    #+#             */
/*   Updated: 2024/12/11 15:36:01 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
			std::string	_target;

	public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(const std::string&target);
			ShrubberyCreationForm(const ShrubberyCreationForm &copy);
			~ShrubberyCreationForm();

			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &assign);

			std::string	getTarget() const;

			void	execute(const Bureaucrat &executor) const;

			class fileOpenException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};
};

#endif
