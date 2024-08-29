/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:03:26 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/29 17:09:41 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

PmergeMe::PmergeMe(std::vector<int> inputElements) : m_vec(inputElements), m_deq(inputElements.begin(), inputElements.end())
{
    std::cout << "PmergeMe Default Constructor" << std::endl;
}


PmergeMe::PmergeMe(PmergeMe const& example) : m_vec(example.m_vec), m_deq(example.m_vec.begin(), example.m_vec.end())
{
    std::cout << "PmergeMe Copy Constructor" << std::endl;
}


/*PmergeMe& PmergeMe::operator=(PmergeMe const& example) 
{
    if (this != &example)
    {
        m_vec(example.m_vec);
        m_deq(example.m_vec.begin(), example.m_vec.end());
    }
    std::cout << "PmergeMe Operator = Overload" << std::endl;
    return *this;
}*/

PmergeMe::~PmergeMe()
{
    std::cout << "PmergeMe Default Destructor" << std::endl;
}

std::vector<int>& PmergeMe::getVector()
{
    return m_vec;
}

std::deque<int>& PmergeMe::getDeque()
{
    return m_deq;
}

void PmergeMe::printElements()
{
    std::vector<int>::iterator it = m_vec.begin();
    std::vector<int>::iterator end = m_vec.end();

    std::cout << "Vector Elements" << std::endl;
    while (it != end)
    {
        std::cout << *it << std::endl;
        it++;
    }

    std::deque<int>::iterator it_d = m_deq.begin();
    std::deque<int>::iterator end_d = m_deq.end();

    std::cout << "\nDeque Elements" << std::endl;
    while (it_d != end_d)
    {
        std::cout << *it_d << std::endl;
        it_d++;
    }
}

const char* PmergeMe::negativeNumber::what() const throw()
{
    return ("Error: numbers passed as args cannot be negative\n");
}
