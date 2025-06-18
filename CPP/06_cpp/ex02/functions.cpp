/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:52:26 by apintus           #+#    #+#             */
/*   Updated: 2025/01/14 16:04:01 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base *generate(void)
{
    int random = rand() % 3;
    
    switch(random)
    {
        case 0:
            std::cout << "A generated" << std::endl;
            return (new A());
        case 1:
            std::cout << "B generated" << std::endl;
            return (new B());
        case 2:
            std::cout << "C generated" << std::endl;
            return (new C());
        default:
            return (NULL);
    }
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "this pointer is an A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "this pointer is a B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "this pointer is a C" << std::endl;
    else if (p == NULL)
        std::cout << "this pointer is NULL" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "this reference is an A" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "this reference is a B" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "this reference is a C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}