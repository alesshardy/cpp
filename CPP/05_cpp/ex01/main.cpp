/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:07 by apintus           #+#    #+#             */
/*   Updated: 2025/01/14 12:04:31 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "=== Test 1: Bureaucrat with lowest grade ===" << std::endl;
	try
	{
		Bureaucrat bureaucrat1("Bureaucrat1", 150);
		std::cout << "Created: " << bureaucrat1 << std::endl;
		std::cout << "Trying to decrement grade" << std::endl;
		bureaucrat1.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Test 2: Bureaucrat with highest grade ===" << std::endl;
	try
	{
		Bureaucrat bureaucrat2("Bureaucrat2", 1);
		std::cout << "Created: " << bureaucrat2 << std::endl;
		std::cout << "Trying to increment grade" << std::endl;
		bureaucrat2.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Test 3: Bureaucrat increment and decrement ===" << std::endl;
	try
	{
		Bureaucrat bureaucrat3("Bureaucrat3", 75);
		std::cout << "Created: " << bureaucrat3 << std::endl;
		std::cout << "Trying to increment and decrement grade" << std::endl;
		bureaucrat3.incrementGrade();
		std::cout << "After increment: " << bureaucrat3 << std::endl;
		bureaucrat3.decrementGrade();
		std::cout << "After decrement: " << bureaucrat3 << std::endl;
		std::cout << std::endl;

		std::cout << "=== Test 4: Copy constructor ===" << std::endl;
		Bureaucrat bureaucratCopy(bureaucrat3);
		std::cout << "Copied: " << bureaucratCopy << std::endl;
		std::cout << std::endl;

		std::cout << "=== Test 5: Assignment operator ===" << std::endl;
		Bureaucrat bureaucratAssign = bureaucrat3;
		std::cout << "Assigned: " << bureaucratAssign << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Test 6: Form signing ===" << std::endl;
	try
	{
		Bureaucrat bureaucrat4("Bureaucrat4", 1);
		Form form1("Form1", 1, 1);
		std::cout << "Created: " << bureaucrat4 << std::endl;
		std::cout << "Created: " << form1 << std::endl;
		bureaucrat4.signForm(form1);
		std::cout << "Form status: " << form1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "=== Test 7: Form signing with insufficient grade ===" << std::endl;
	try
	{
		Bureaucrat bureaucrat5("Bureaucrat5", 150);
		Form form2("Form2", 1, 1);

		std::cout << "Created: " << bureaucrat5 << std::endl;
		std::cout << "Created: " << form2 << std::endl;

		bureaucrat5.signForm(form2);
		std::cout << "Form status: " << form2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	return (0);
}
