/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:00:56 by apintus           #+#    #+#             */
/*   Updated: 2024/11/19 18:09:21 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::~Point()
{
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
}

Point::Point(const Point &point): _x(point.getX()), _y(point.getY())
{
}

Point	&Point::operator=(const Point &point)
{
	(void) point;
	return (*this);
}

const Fixed &Point::getX(void) const
{
	return (_x);
}

const Fixed &Point::getY(void) const
{
	return (_y);
}

