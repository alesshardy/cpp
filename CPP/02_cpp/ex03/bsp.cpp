/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 18:09:44 by apintus           #+#    #+#             */
/*   Updated: 2024/11/19 18:16:08 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

static Fixed	abs(const Fixed a)
{
	return (a < 0 ? (a * -1) : a);
}

static Fixed	area(const Point a, const Point b, const Point c)
{
	return	(abs((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2));
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	Fixed	abc = abs(area(a, b, c));
	Fixed	abp = abs(area(a, b, point));
	Fixed	acp = abs(area(a, c, point));
	Fixed	bcp = abs(area(b, c, point));

	return (abc == abp + acp + bcp);
}
