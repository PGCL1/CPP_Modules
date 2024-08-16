/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:13:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/16 19:32:51 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdarg>

Span::Span() : m_element()
{
    m_maxSize = 0;
    m_size = 0;
    std::cout << "Default Constructor Span" << std::endl;
    
}

Span::Span(unsigned int N) : m_element()
{
    m_size = 0;
    m_maxSize = N;
    std::cout << "Constructor with Params Span" << std::endl;
}

Span::~Span()
{
    std::cout << "Default Destructor Span" << std::endl;
}

void Span::addNumber(int num)
{
    if (m_size + 1 < m_maxSize)
    {
        m_size += 1;
        m_element.push_back(num); 
    }
    else
        throw Span::maxSizeReached();
}

int Span::shortestSpan()
{
    if (m_size != 0)
    {
        std::list<int> tmp(m_element);
        tmp.sort();
        std::list<int>::iterator it = tmp.begin();
        int begin = *it;
        return (*(++it) - begin);
    }
    throw Span::emptyList();
}

int Span::longestSpan()
{
    if (m_size != 0)
    {
        std::list<int> tmp(m_element);
        tmp.sort();
        std::list<int>::iterator it = tmp.begin();
        std::list<int>::iterator end = tmp.end();
        return (*(--end) - *it);
    }
    throw Span::emptyList();
}

void Span::printElements()
{
    std::list<int>::iterator it = m_element.begin();
    std::list<int>::iterator end = m_element.end();
    while (it != end)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

const char* Span::maxSizeReached::what() const throw()
{
    return ("Maximum size has been reached, cannot add more numbers");
}


const char* Span::emptyList::what() const throw()
{
    return ("No numbers stored, no span found!");
}

void Span::addAll(int size,...)
{
    va_list args;
    va_start(args, size);
    while (--size != 0)
    {
        int num = va_arg(args, int);
        m_element.push_back(num);
        std::cout << num << std::endl;
        m_size += 1;
    }
    va_end(args);
    /*if (argList.size() + m_size >= m_maxSize)
        throw Span::maxSizeReached();
    std::list<int>::iterator it = m_element.begin();
    m_element.insert(it, argList.begin(), argList.end());*/
}
