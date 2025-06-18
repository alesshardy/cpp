/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:42:34 by apintus           #+#    #+#             */
/*   Updated: 2024/12/06 17:54:57 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("NoNameForm"), _signed(false), _signGrade(150), _execGrade(150)
{
	// std::cout << "Form Default constructor called." << std::endl;
}

Form::Form(const std::string &name, int signGrade, int execGrade): _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	// std::cout << "Form Name constructor called." << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form &copy): _name(copy._name), _signed(copy._signed), _signGrade(copy._signed), _execGrade(copy._execGrade)
{
	// std::cout << "Form Copy constructor called." << std::endl;
}

Form::~Form()
{
	// std::cout << "Form Destructor called." << std::endl;
}

Form &Form::operator=(const Form &assign)
{
	if (this != &assign)
		_signed = assign._signed;
	return (*this);
}

//Getters
std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getIsSigned() const
{
	return (_signed);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

//Method
void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	_signed = true;
}

//Exception
const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

//Operator
std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
	out << "FORM INFO" << std::endl;
	out << "Form name: " << rhs.getName() << std::endl;
	out << "Form signed: " << (rhs.getIsSigned() ? "Yes" : "No") << std::endl;
	out << "Form sign grade: " << rhs.getSignGrade() << std::endl;
	out << "Form exec grade: " << rhs.getExecGrade() << std::endl;
	return (out);
}
