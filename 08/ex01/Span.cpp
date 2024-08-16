/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:13:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/16 14:20:57 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

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
        // only do this for shortest span or longest span m_element.sort();
    }
    else
        throw Span::maxSizeReached();
}

int Span::shortestSpan()
{
    if (m_size != 0)
    {
        m_element.sort();
        std::list<int>::iterator it = m_element.begin();
        int begin = *it;
        return (*(++it) - begin);
    }
    throw Span::emptyList();
}

int Span::longestSpan()
{
    if (m_size != 0)
    {
        m_element.sort();
        std::list<int>::iterator it = m_element.begin();
        std::list<int>::iterator end = m_element.end();
        std::cout << "end: " << *end << " | it: " << *it << std::endl;
        return (*end - *it);
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
