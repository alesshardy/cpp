/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:43:03 by apintus           #+#    #+#             */
/*   Updated: 2025/01/10 17:46:10 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
    private:
            unsigned int        _N;
            std::vector<int>    _vec;
    
    public:
            Span();
            Span(unsigned int N);
            Span(const Span &copy);
            ~Span();

            Span &operator=(const Span &assign);

            void    addNumber(int nb);
            int     shortestSpan();
            int     longestSpan();
            void    addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
            
            class   FullSpanException : public std::exception
            {
                virtual const char *what() const throw();
            };

            class   NoSpanException : public std::exception
            {
                virtual const char  *what() const throw();
            };
};

#endif