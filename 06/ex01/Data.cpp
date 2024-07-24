/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:20:22 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 18:20:22 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

Data::Data() : m_magicWords("We are getting the code"), m_wish(true), m_luckyNum(4)
{
    std::cout << "Data's Default Constructor" << std::endl;
}

Data::Data(std::string magicWords_example, bool wish_example, int luckyNum_example)
{
    m_magicWords = magicWords_example;
    m_wish = wish_example;
    m_luckyNum = luckyNum_example;
    std::cout << "Data's Param Constructor" << std::endl;
}

Data::Data(const Data& example)
{
    this->m_magicWords = example.m_magicWords;
    this->m_wish = example.m_wish;
    this->m_luckyNum = example.m_luckyNum;
    std::cout << "Copy Constructor" << std::endl;
}

Data& Data::operator=(const Data& example)
{
    if (this != &example)
    {
        this->m_magicWords = example.m_magicWords;
        this->m_wish = example.m_wish;
        this->m_luckyNum = example.m_luckyNum;
    }
    std::cout << "Operator= overload assignement" << std::endl;
    return (*this);

}

Data::~Data()
{
    std::cout << "Default Data Destructor" << std::endl;
}
