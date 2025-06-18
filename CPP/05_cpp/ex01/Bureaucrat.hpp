/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:23 by apintus           #+#    #+#             */
/*   Updated: 2024/12/06 15:35:06 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
			const std::string	_name;
			int					_grade;

	public:
			Bureaucrat();
			Bureaucrat(const std::string &name, int grade);
			Bureaucrat(const Bureaucrat &copy);
			~Bureaucrat();

			Bureaucrat &operator=(const Bureaucrat &assign);

			std::string	getName() const;
			int	getGrade() const;

			void	incrementGrade();
			void	decrementGrade();
			void	signForm(Form &form);

			class GradeTooHighException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};

};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
