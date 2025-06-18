/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:11:17 by apintus           #+#    #+#             */
/*   Updated: 2024/11/19 16:21:35 by apintus          ###   ########.fr       */
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
			Fixed(void);
			Fixed(const Fixed &fixed);
			Fixed &operator=(const Fixed &fixed);
			~Fixed(void);
			
			Fixed(const int value);
			Fixed(const float value);
			int		getRawBits(void) const;
			void	setRawBits(int const raw);
			float	toFloat(void) const;
			int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
