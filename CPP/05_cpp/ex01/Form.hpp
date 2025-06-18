/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:42:20 by apintus           #+#    #+#             */
/*   Updated: 2024/12/06 16:40:24 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
			const std::string	_name;
			bool				_signed;
			const int			_signGrade;
			const int			_execGrade;

	public:
			Form();
			Form(const std::string &name, int signGrade, int execGrade);
			Form(const Form &copy);
			~Form();

			Form &operator=(const Form &assign);

			std::string	getName() const;
			bool		getIsSigned() const;
			int			getSignGrade() const;
			int			getExecGrade() const;

			void	beSigned(Bureaucrat &bureaucrat);

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

std::ostream &operator<<(std::ostream &out, const Form &rhs);

#endif

