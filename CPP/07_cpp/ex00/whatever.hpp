/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:43:02 by apintus           #+#    #+#             */
/*   Updated: 2025/01/09 16:48:43 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void    swap(T &a, T&b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T   &min(T &a, T &b)
{
    return (a < b ? a : b);
}

template <typename T>
T   &max(T &a, T &b)
{
    return(a > b ? a : b);
}

#endif