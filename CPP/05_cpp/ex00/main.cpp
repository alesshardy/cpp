/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:07 by apintus           #+#    #+#             */
/*   Updated: 2024/12/05 12:59:14 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *bureaucrat = new Bureaucrat("Bureaucrat1", 150);
	std::cout << *bureaucrat << std::endl;
	std::cout << "== Try decrementGrade ==" << std::endl;
	try
	{
		bureaucrat->decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete bureaucrat;

	std::cout << std::endl;
	Bureaucrat *bureaucrat2 = new Bureaucrat("Bureaucrat2", 1);
	std::cout << *bureaucrat2 << std::endl;
	std::cout << "== Try incrementGrade ==" << std::endl;
	try
	{
		bureaucrat2->incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete bureaucrat2;

	std::cout << std::endl;
	Bureaucrat	*bureaucrat3 = new Bureaucrat("Bureaucrat3", 3);
	std::cout << *bureaucrat3 << std::endl;
	std::cout << "== Try incrementGrade ==" << std::endl;
	try
	{
		bureaucrat3->incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << *bureaucrat3 << std::endl;
	std::cout << "== Try decrementGrade ==" << std::endl;
	try
	{
		bureaucrat3->decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << *bureaucrat3 << std::endl;
	delete bureaucrat3;

	return (0);
}
