/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:56:04 by apintus           #+#    #+#             */
/*   Updated: 2024/12/10 16:07:32 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
			std::string	_target;

	public:
			PresidentialPardonForm();
			PresidentialPardonForm(const std::string &target);
			PresidentialPardonForm(const PresidentialPardonForm &copy);
			~PresidentialPardonForm();

			PresidentialPardonForm &operator=(const PresidentialPardonForm &assign);

			std::string	getTarget() const;

			void	execute(const Bureaucrat &executor) const;
};

#endif
