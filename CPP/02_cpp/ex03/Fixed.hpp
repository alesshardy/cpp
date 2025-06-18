/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:41:10 by apintus           #+#    #+#             */
/*   Updated: 2024/11/19 16:47:14 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
			int					_value;
			static const int	_fractionalBits = 8;
	public:
			Fixed();
			Fixed(const Fixed &fixed);
			Fixed &operator=(const Fixed &fixed);
			~Fixed();

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			Fixed(const int value);
			Fixed(const float value);
			float	toFloat(void) const;
			int		toInt(void) const;

			bool	operator>(const Fixed & out) const;
			bool	operator<(const Fixed & out) const;
			bool	operator>=(const Fixed & out) const;
			bool	operator<=(const Fixed &out) const;
			bool	operator==(const Fixed &out) const;
			bool	operator!=(const Fixed &out) const;

			Fixed	operator+(const Fixed &out) const;
			Fixed	operator-(const Fixed &out) const;
			Fixed	operator*(const Fixed &out) const;
			Fixed	operator/(const Fixed &out) const;

			Fixed	&operator++(void);
			Fixed	operator++(int);
			Fixed	&operator--(void);
			Fixed	operator--(int);

			static	Fixed &min(Fixed &ref1, Fixed &ref2);
			static	Fixed &max(Fixed &ref1, Fixed &ref2);
			static const	Fixed	&min(const Fixed &ref1, const Fixed &ref2);
			static const	Fixed	&max(const Fixed &ref1, const Fixed &ref2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &in);

#endif
