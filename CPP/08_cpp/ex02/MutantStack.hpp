/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:02:04 by apintus           #+#    #+#             */
/*   Updated: 2025/01/17 12:45:04 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
           MutantStack() : std::stack<T>() {}
           MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
           ~MutantStack() {}

           MutantStack &operator=(const MutantStack &assign)
           {
                if (this != &assign)
                    std::stack<T>::operator=(assign);
                return (*this);
           } 
           
           typedef typename std::stack<T>::container_type::iterator iterator;
           typedef typename std::stack<T>::container_type::const_iterator const_iterator;
           typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
           typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
           
            iterator begin() { return this->c.begin(); }
            iterator end() { return this->c.end(); }

            const_iterator begin() const { return this->c.cbegin(); }
            const_iterator end() const { return this->c.cend(); }

            reverse_iterator rbegin() { return this->c.rbegin(); }
            reverse_iterator rend() { return this->c.rend(); }
            
            const_reverse_iterator rbegin() const { return this->c.crbegin(); }
            const_reverse_iterator rend() const { return this->c.crend(); }           
};

#endif