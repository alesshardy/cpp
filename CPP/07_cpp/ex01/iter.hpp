/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:56:05 by apintus           #+#    #+#             */
/*   Updated: 2025/01/09 17:00:31 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *array, size_t size, void (*f)(T const &))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}

#endif