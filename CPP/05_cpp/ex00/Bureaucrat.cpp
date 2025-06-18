/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 12:58:04 by apintus           #+#    #+#             */
/*   Updated: 2024/12/06 16:53:08 by apintus          ###   ########.fr       */
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
		throw Bureaucrat::GradeTooHighExecption();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowExecption();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name), _grade(copy._grade)
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
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

//Function
void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighExecption();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowExecption();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighExecption::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowExecption::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}

