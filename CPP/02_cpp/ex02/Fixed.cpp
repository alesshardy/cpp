/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:41:03 by apintus           #+#    #+#             */
/*   Updated: 2024/11/20 15:02:36 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _value(value << _fractionalBits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << _fractionalBits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	// std::cout << "Copy assignement operator called" << std::endl;
	if (this != &fixed)
		_value = fixed.getRawBits();
	return (*this);
}

//Surcharge de l'operateur <<
std::ostream &operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fractionalBits);
}

//Operateurs de comparaison
bool	Fixed::operator>(Fixed const &out) const
{
	return (this->_value > out.getRawBits());
}

bool	Fixed::operator<(Fixed const &out) const
{
	return (this->_value < out.getRawBits());
}

bool	Fixed::operator>=(Fixed const &out) const
{
	return (this->_value >= out.getRawBits());
}

bool	Fixed::operator<=(Fixed const &out) const
{
	return (this->_value <= out.getRawBits());
}

bool	Fixed::operator==(Fixed const &out) const
{
	return (this->_value == out.getRawBits());
}

bool	Fixed::operator!=(Fixed const &out) const
{
	return (this->_value != out.getRawBits());
}

//Operateurs arithmetiques
Fixed	Fixed::operator+(const Fixed &out) const
{
	Fixed	result;
	result.setRawBits(this->_value + out._value);
	return (result);
}

Fixed	Fixed::operator-(const Fixed &out) const
{
	Fixed	result;
	result.setRawBits(this->_value - out._value);
	return (result);
}

Fixed	Fixed::operator*(const Fixed &out) const
{
	Fixed	result;
	result.setRawBits((this->_value * out._value) >> _fractionalBits);
	return (result);
}

Fixed	Fixed::operator/(const Fixed &out) const
{
	Fixed	result;
	if (!out._value)
	{
		std::cout << "Error: Division by zero" << std::endl;
	}
	result.setRawBits((this->_value << _fractionalBits) / out._value);
	return (result);
}

//Operateurs d'incrementation/decrementation
Fixed	&Fixed::operator++(void)
{
	++_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;
	++_value;
	return(tmp);
}

Fixed	&Fixed::operator--(void)
{
	--_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--_value;
	return (tmp);
}

Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
	return (ref1._value > ref2._value ? ref2 : ref1);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2)
{
	return (ref1._value < ref2._value ? ref2 : ref1);
}

const	Fixed &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	return (ref1._value > ref2._value ? ref2 : ref1);
}

const	Fixed &Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	return (ref1._value < ref2._value ? ref2 : ref1);
}
