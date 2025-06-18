/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:56:25 by apintus           #+#    #+#             */
/*   Updated: 2024/12/10 16:54:01 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
	_target = copy._target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	if (this != &assign)
	{
		_target = assign._target;
	}
	return (*this);
}

//Getters
std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}


//Function
void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->checkExecution(executor);
	std::cout << _target << " has been pardonned by Zafod Beeblebrox" << std::endl;
}
