/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:19:59 by apintus           #+#    #+#             */
/*   Updated: 2024/12/12 16:08:30 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
			Intern();
			Intern(const Intern &copy);
			~Intern();

			Intern &operator=(const Intern &assign);

			AForm *makeForm(const std::string &name, const std::string &target);

			class UnknownFormException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};
};

#endif
