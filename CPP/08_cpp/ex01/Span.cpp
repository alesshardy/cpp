/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:42:54 by apintus           #+#    #+#             */
/*   Updated: 2025/01/10 17:49:22 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span::~Span()
{
}


Span &Span::operator=(const Span &assign)
{
    if (this != &assign)
    {
        _N = assign._N;
        _vec = assign._vec;
    }
    return (*this);
}

void    Span::addNumber(int number)
{
    if (_vec.size() >= _N)
        throw FullSpanException();
    _vec.push_back(number);
}

int Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw NoSpanException();
    std::vector<int>    tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (size_t i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i - 1] < min)
            min = tmp[i] - tmp[i - 1];   
    }
    return (min);
}

int Span::longestSpan()
{
    if (_vec.size() <= 1)
        throw NoSpanException();
    std::vector<int>    tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size() - 1] - tmp[0]);
}

const char  *Span::FullSpanException::what() const throw()
{
    return ("Span is full");
}

const char  *Span::NoSpanException::what() const throw()
{
    return ("No Span to find");
}

void    Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    //Verif si depace capa max
    if (_vec.size() + std::distance(start, end) > _N)
        throw FullSpanException();
    
    _vec.insert(_vec.end(), start, end);
}