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

Span::Span() : m_element(), m_size(0)
{
    m_maxSize = 0;
    std::cout << "Default Constructor Span" << std::endl;
}

Span::Span(unsigned int N) : m_element(), m_maxSize(N), m_size(0)
{
    std::cout << "Constructor with Params Span" << std::endl;
}

Span::Span(Span& example) : m_maxSize(example.m_maxSize)
{
    if (this != &example)
    {
        m_size = example.m_size;
        m_element.assign(example.m_element.begin(), example.m_element.end());
    }
}

Span& Span::operator=(const Span& example)
{
    if (example.m_size > this->m_maxSize)
        throw Span::cannotCopy();
    if (this != &example)
    {
        m_size = example.m_size;
        m_element.assign(example.m_element.begin(), example.m_element.end());
    }
    return (*this);
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

void Span::addAll(std::vector<int> vec)
{
    m_size += vec.size();
    if (m_size > m_maxSize)
        throw Span::maxSizeReached();
    std::list<int>::iterator it = m_element.begin();
    m_element.insert(it, vec.begin(), vec.end());
}

int Span::shortestSpan() const
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

int Span::longestSpan() const
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
    if (!m_size)
        throw Span::emptyList();
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

const char* Span::cannotCopy::what() const throw()
{
    return ("Cannot copy this list as its size is superior to the maxSize of the current list");
}

const char* Span::emptyList::what() const throw()
{
    return ("No numbers stored, no span found!");
}

