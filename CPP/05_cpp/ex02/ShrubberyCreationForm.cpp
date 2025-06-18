/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:55:00 by apintus           #+#    #+#             */
/*   Updated: 2024/12/11 15:39:53 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShruberryCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShruberryCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	_target = copy._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	if (this != &assign)
	{
		_target = assign._target;
	}
	return (*this);
}

//Getters
std::string	ShrubberyCreationForm::getTarget() const
{
	return (_target);
}

//Functions
void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->checkExecution(executor);
	std::string	filename = _target + "_shrubbery";
	std::ofstream	file(filename.c_str());

	if (!file.is_open())
		throw fileOpenException();
	 file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;

	file.close();
}

const char* ShrubberyCreationForm::fileOpenException::what() const throw()
{
	return ("Error: File open failed");
}
