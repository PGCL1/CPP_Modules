/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:01:18 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/22 13:33:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string line)
{
    m_year = strToNum<int>(line.substr(0, 4));
    m_month = strToNum<int>(line.substr(5, 2));
    m_day = strToNum<int>(line.substr(8, 2));
    m_value = strToNum<double>(line.substr(11));
    /*m_exchangeRate = strToNum<double>(line.substr(line.find("|") + 1));

    if (m_month < 0 || m_day < 0 || m_month > 12 || m_day > 31)
        std::cerr << "Error: date is incorrect => " << line << std::endl;

    if (m_exchangeRate < 0.0 || m_exchangeRate > 1000.0)
        std::cerr << "Error: exchange rate is wrong" << std::endl;
    */
}

void BitcoinExchange::print()
{
    std::cout << m_year << "-" << m_month << "-" << m_day << ": " << m_value << std::endl;
}

