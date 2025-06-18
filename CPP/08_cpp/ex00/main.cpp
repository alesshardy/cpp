/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:00:05 by apintus           #+#    #+#             */
/*   Updated: 2025/01/10 16:33:54 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
    //Test avec std::vector
    std::vector<int> vec;
    for (int i = 1; i < 5; i++)
        vec.push_back(i);
    try
    {
        easyfind(vec, 3);
        easyfind(vec, 6);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    //Test avec std::list
    std::list<int> lst;
    for (int i = 10; i < 50; i += 10)
        lst.push_back(i);
    try
    {
        easyfind(lst, 20);
        easyfind(lst, 60);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    //Test avec std::deque
    std::deque<int> deq;
    for (int i = 100; i < 500; i += 100)
        deq.push_back(i);
    try
    {
        easyfind(deq, 300);
        easyfind(deq, 600);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}