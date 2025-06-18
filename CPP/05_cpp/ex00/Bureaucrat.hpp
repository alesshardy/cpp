/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:23 by apintus           #+#    #+#             */
/*   Updated: 2024/12/05 18:03:02 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

			class GradeTooHighExecption : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};

			class GradeTooLowExecption : public std::exception
			{
				public:
						virtual const char* what() const throw();
			};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
