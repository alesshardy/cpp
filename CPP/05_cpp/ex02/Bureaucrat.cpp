/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:04 by apintus           #+#    #+#             */
/*   Updated: 2024/12/06 18:01:05 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("NoName"), _grade(150)
{
	// std::cout << "Bureaucrat Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	// std::cout << "Bureaucrat Name constructor called." << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name), _grade(copy._grade)
{
	// std::cout << "Bureaucrat Copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	// std::cout << "Bureaucrat Destructor called." << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &assign)
{
	if (this != &assign)
		_grade = assign._grade;
	return (*this);
}

//Getters
std::string	Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

//Methods
void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned())
		std::cout << _name << " couldn't sign " << form.getName() << " because the form is already signed." << std::endl;
	else if (_grade > form.getSignGrade())
		std::cout << _name << " couldn't sign " << form.getName() << " because his grade is too low." << std::endl;
	else
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}

}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (_grade > form.getExecGrade())
		std::cout << _name << " couldn't execute " << form.getName() << " because his grade is too low." << std::endl;
	else if (!form.getIsSigned())
		std::cout << _name << " couldn't execute " << form.getName() << " because the form is not signed." << std::endl;
	else
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
}


//Exception
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

//Operator overload
std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}

