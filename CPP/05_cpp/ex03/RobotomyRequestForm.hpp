/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:55:28 by apintus           #+#    #+#             */
/*   Updated: 2024/12/12 15:18:27 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUEST_HPP
# define ROBOTOMYREQUEST_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public AForm
{
	private:
			std::string	_target;

	public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &assign);

	std::string	getTarget() const;

	void	execute(const Bureaucrat &executor) const;
};

#endif
