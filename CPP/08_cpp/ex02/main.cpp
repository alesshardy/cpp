/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:15:31 by apintus           #+#    #+#             */
/*   Updated: 2025/01/17 11:50:36 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "+++++ MUTANT STACK +++++" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "=== PRINT TOP OF STACK ===" << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "=== PRINT SIZE AFTER POP ===" << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "=== PRINT EVERTYHING WITH ITERATOR ===" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "+++++ LIST +++++" << std::endl;
	std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << "=== PRINT TOP OF LIST ===" << std::endl;
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << "=== PRINT SIZE AFTER POP ===" << std::endl;
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator sIt = list.begin();
    std::list<int>::iterator sIte = list.end();
    ++sIt;
    --sIt;
    std::cout << "=== PRINT EVERYTHING WITH ITERATOR ===" << std::endl;
    while (sIt != sIte)
    {
        std::cout << *sIt << std::endl;
        ++sIt;
    }
    std::list<int> l(list);
    return (0);
}