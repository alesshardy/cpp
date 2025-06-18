/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:42:34 by apintus           #+#    #+#             */
/*   Updated: 2024/12/10 16:53:13 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("NoNameForm"), _signed(false), _signGrade(150), _execGrade(150)
{
	// std::cout << "AForm Default constructor called." << std::endl;
}

AForm::AForm(const std::string &name, int signGrade, int execGrade): _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	// std::cout << "AForm Name constructor called." << std::endl;
	if (signGrade < 1 || execGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw Bureaucrat::GradeTooLowException();
}

AForm::AForm(const AForm &copy): _name(copy._name), _signed(copy._signed), _signGrade(copy._signed), _execGrade(copy._execGrade)
{
	// std::cout << "AForm Copy constructor called." << std::endl;
}

AForm::~AForm()
{
	// std::cout << "AForm Destructor called." << std::endl;
}

AForm &AForm::operator=(const AForm &assign)
{
	if (this != &assign)
		_signed = assign._signed;
	return (*this);
}

//Getters
std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getIsSigned() const
{
	return (_signed);
}

int	AForm::getSignGrade() const
{
	return (_signGrade);
}

int	AForm::getExecGrade() const
{
	return (_execGrade);
}

//Method
void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw AForm::GradeTooLowException();
	_signed = true;
}

void	AForm::checkExecution(const Bureaucrat &executor) const
{
	if (!_signed)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > _execGrade)
		throw AForm::GradeTooLowException();
}

//Exception
const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void	AForm::execute(Bureaucrat const &executor) const
{
	(void)executor;
}

//Operator
std::ostream &operator<<(std::ostream &out, const AForm &rhs)
{
	out << "FORM INFO" << std::endl;
	out << "Form name: " << rhs.getName() << std::endl;
	out << "Form signed: " << (rhs.getIsSigned() ? "Yes" : "No") << std::endl;
	out << "Form sign grade: " << rhs.getSignGrade() << std::endl;
	out << "Form exec grade: " << rhs.getExecGrade() << std::endl;
	return (out);
}
