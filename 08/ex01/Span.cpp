/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:13:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/15 17:57:45 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : m_element()
{
    m_maxSize = 1;
    std::cout << "Default Constructor Span" << std::endl;
    
}

Span::Span(unsigned int N) : m_element(N)
{
    m_maxSize = N;
    //problem because it initializes the values to 0 so my list as 5 times 0 and then my elements
    std::cout << "Constructor with Params Span" << std::endl;
}

Span::~Span()
{
    std::cout << "Default Destructor Span" << std::endl;
}

void Span::addNumber(int num)
{
   m_element.push_back(num); 
   m_element.sort();
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
