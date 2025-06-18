/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:07 by apintus           #+#    #+#             */
/*   Updated: 2024/12/12 15:07:52 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat boss("BOSS", 1);
		Bureaucrat guy("TheNewGuy", 150);

		ShrubberyCreationForm shrubbery("Tree");
		RobotomyRequestForm robotomy("Robot");
		PresidentialPardonForm pardon("Thug");

		std::cout << "=== Signing Forms ===" << std::endl;
		boss.signForm(shrubbery);
		boss.signForm(robotomy);
		boss.signForm(pardon);

		std::cout << "=== Executing Forms ===" << std::endl;
		boss.executeForm(shrubbery);
		boss.executeForm(robotomy);
		boss.executeForm(pardon);

		std::cout << "=== Attempting to sign and execute with low-grade bureaucrat ===" << std::endl;
		guy.signForm(shrubbery);
		guy.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}
