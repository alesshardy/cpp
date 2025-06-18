/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:11:41 by apintus           #+#    #+#             */
/*   Updated: 2025/01/09 17:20:39 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void    print(T const &x)
{
    std::cout << x << std::endl;
}

int main(void)
{
    int intArray[] = {1, 2, 3, 4, 5};
    float   floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};
    
    std::cout << "intArray:" << std::endl;
    iter(intArray, 5, print);
    std::cout << "floatArray:" << std::endl;
    iter(floatArray, 5, print);
    std::cout << "stringArray:" << std::endl;
    iter(stringArray, 5, print);
}
