/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:01:37 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/05 12:33:00 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
    private:
        T *m_element;
        size_t m_size;
    public:
        void    setElement(size_t pos, T value);
        T       getElement(size_t pos);
        size_t  getSize();
        class outBoundIndex : public std::exception {
            const char *what(void) const throw();
        };
        Array();
        Array(unsigned int n);
        Array(Array const& example);
        Array& operator=(Array const& example)
        {
            std::cout << "Array's Assignement Overload `=`" << std::endl;
            if (this != example)
            {
                for (unsigned int i = 0; example[i]; i++)
                    this->m_element[i] = example.m_element[i];
            }
            return (*this);
        }
        ~Array();
};

template <class T>
Array<T>::Array() 
{
    std::cout << "Array's Default Constructor" << std::endl;
    m_element = new T();
}

template <class T>
Array<T>::Array(unsigned int n)
{
    std::cout << "Array's Param Constructor" << std::endl;
    m_element = new T[n]();
    m_size += n;
}

template <class T>
Array<T>::Array(Array<T> const& example)
{
    if (this->getSize())
        delete [] m_element;
    if (this != &example)
    {
        this->m_element = new T[example.getSize()];
        for (unsigned int i = 0; example.m_element[i]; i++)
            this->m_element[i] = example.m_element[i];
    }
    return;
}

template <class T>
Array<T>::~Array()
{
    std::cout << "Array's Default Destructor" << std::endl;
    delete [] m_element;
}

template <class T>
void Array<T>::setElement(size_t pos, T value)
{
    if (pos < m_size)
        m_element[pos] = value;
    else
        throw Array<T>::outBoundIndex();
}

template <class T>
T Array<T>::getElement(size_t pos)
{
    if (pos < m_size)
        return (m_element[pos]);
    else
        throw Array<T>::outBoundIndex();
}

template <class T>
size_t Array<T>::getSize()
{
    return (m_size);
}

template <class T>
const char* Array<T>::outBoundIndex::what() const throw() {
    return ("Index is out of bound");
}

#endif

