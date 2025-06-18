/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:33:25 by apintus           #+#    #+#             */
/*   Updated: 2024/11/15 16:09:13 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(std::string filename)
{
	this->_filename = filename;
	this->_in.open(filename.c_str());
	if (!this->_in.is_open())
	{
		std::cerr << "Error: " << filename << " does not exist or can't be opened" << std::endl;
		return ;
	}
	if (this->_filename.empty())
	{
		std::cerr << "Error: Empty file" << std::endl;
		return ;
	}
}

Sed::~Sed(void)
{
	if (this->_in.is_open())
		this->_in.close();
	return ;
}

void	Sed::replace(std::string s1, std::string s2)
{
	std::string		line;
	std::ofstream	out;
	size_t			pos = 0;

	if (!this->_in.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return ;
	}
	if (std::getline(this->_in, line, '\0'))
	{
		out.open((this->_filename + ".replace").c_str());
		if (!out.is_open())
		{
			std::cerr << "Error: could not outfile." << std::endl;
			return ;
		}
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		out << line;
		out.close();
	}
	else
	{
		std::cerr << "Error: File is empty" << std::endl;
		return ;
	}
}
