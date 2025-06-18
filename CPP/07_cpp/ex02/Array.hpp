/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apintus <apintus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:33:18 by apintus           #+#    #+#             */
/*   Updated: 2025/03/06 15:27:30 by apintus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
            T       *_array;
            size_t  _size;

    public:
            Array();
            Array(unsigned int n);
            Array(Array const &copy);
            ~Array();

            Array   &operator=(Array const &assign);
            T       &operator[](size_t i);

            size_t  size(void) const;

            class OutOfLimitsException : public std::exception
            {
                public:
                        virtual const char  *what() const throw();
            };
            
};

//Constructor
template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    for (size_t i = 0; i < n; i++)
        _array[i] = T();
}

//Copy constructor
template <typename T>
Array<T>::Array(Array const &copy)
{
    _size = copy.size();
    _array = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _array[i] = copy._array[i];
}

//Destructor
template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

// Operator overloads
template <typename T>
Array<T>    &Array<T>::operator=(Array const &assign)
{
    if (this != &assign)
    {
        delete[] _array;
        _size = assign._size;
        _array = new T[_size];
        for (size_t i = 0; i < _size; i++)
            _array[i] = assign._array[i];
    }
    return (*this);
}

template <typename T>
T       &Array<T>::operator[](size_t i)
{
    if (i >= _size)
        throw OutOfLimitsException();
    return (_array[i]);
}

//Member Functions
template <typename T>
size_t  Array<T>::size(void) const
{
    return(_size);
}

//Exception
template <typename T>
const char  *Array<T>::OutOfLimitsException::what() const throw()
{
    return ("Error: Out of limits");
}

#endif