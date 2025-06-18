/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:36:40 by apintus           #+#    #+#             */
/*   Updated: 2024/12/10 16:51:34 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
			const std::string	_name;
			bool				_signed;
			const int			_signGrade;
			const int			_execGrade;

	public:
			AForm();
			AForm(const std::string &name, int signGrade, int execGrade);
			AForm(const AForm &copy);
			virtual ~AForm();

			AForm &operator=(const AForm &assign);

			std::string	getName() const;
			bool		getIsSigned() const;
			int			getSignGrade() const;
			int			getExecGrade() const;

			void	beSigned(Bureaucrat &bureaucrat);
			virtual void	execute(Bureaucrat const & executor) const = 0;
			void	checkExecution(const Bureaucrat &executor) const;

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

			class FormNotSignedException : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};

};

std::ostream &operator<<(std::ostream &out, const AForm &rhs);

#endif

