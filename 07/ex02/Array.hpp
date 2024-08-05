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

template <class T>
class Array
{
    private:
        T *m_element;
    public:
        void    setElement(int pos, T value);
        T       getElement(int pos);
        size_t  size();

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
}

template <class T>
Array<T>::Array(Array<T> const& example)
{
    //need to find a way to find len
    if (this != &example)
    {
        //this->m_element = new T[len];
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
void Array<T>::setElement(int pos, T value)
{
    m_element[pos] = value;
}

template <class T>
T Array<T>::getElement(int pos)
{
    return (m_element[pos]);
}

#endif

