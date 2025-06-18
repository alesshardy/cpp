/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:20:15 by apintus           #+#    #+#             */
/*   Updated: 2024/12/12 16:09:20 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &assign)
{
	(void)assign;
	return (*this);
}

//Functions
static AForm *createPresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

static AForm *createShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *createRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm *Intern::makeForm(const std::string &name, const std::string &target)
{
	AForm *form = NULL;

	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *(*formCreators[3])(const std::string &target) = {&createPresidentialPardonForm, &createRobotomyRequestForm, &createShrubberyCreationForm};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			form = formCreators[i](target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			break;
		}
	}
	if (!form)
		throw Intern::UnknownFormException();
	return (form);
}

const char* Intern::UnknownFormException::what() const throw()
{
	return ("Unknown form");
}
