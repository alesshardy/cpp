/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:55:19 by apintus           #+#    #+#             */
/*   Updated: 2024/11/20 14:00:50 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
			const Fixed	_x;
			const Fixed	_y;
	public:
			Point();
			Point(const Point &point);
			Point	&operator=(const Point &point);
			~Point();
			Point(const float x, const float y);

			const Fixed	&getX(void) const;
			const Fixed	&getY(void) const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);
#endif

