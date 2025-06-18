/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:07 by apintus           #+#    #+#             */
/*   Updated: 2025/02/28 13:11:40 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Bureaucrat boss("Bureaucrat", 1);
	AForm *rrf;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Zaphod Beeblebrox");
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Marvin");
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;

		rrf = someRandomIntern.makeForm("UNknow- form", "Marvin");
		if (rrf)
			delete rrf;
	}
	catch (const Intern::UnknownFormException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
