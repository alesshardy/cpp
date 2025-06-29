/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:52:28 by apintus           #+#    #+#             */
/*   Updated: 2025/01/14 15:31:52 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int main(void)
{
    srand(static_cast<unsigned int>(time(0)));
    
    Base*   base = generate();
    Base*   base2 = generate();
    Base*   base3 = generate();

    std::cout << "Identifying type using pointer:" << std::endl;
    identify(base);
    identify(base2);
    identify(base3);
    
    std::cout << "Identifying type using ref:" << std::endl;
    identify(*base);
    identify(*base2);
    identify(*base3);

    delete base;
    delete base2;
    delete base3;

    return (0);
}