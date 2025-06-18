/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:45:16 by apintus           #+#    #+#             */
/*   Updated: 2024/11/19 16:15:09 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

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

			int		getRawBits(void) const;
			void	setRawBits(int const raw);
};

#endif
