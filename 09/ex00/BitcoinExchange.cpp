/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:01:18 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/22 20:02:04 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream& database) 
{
    std::string line;
    std::map<std::string, float>::iterator it = m_dailyPrice.begin();
    while (std::getline(database, line))
    {
        std::string date = line.substr(0, 10);
        float value = strToNum<float>(line.substr(11));
        m_dailyPrice.insert(it, std::pair<std::string, float>(date, value));
    }
}

void removeOneDay(std::string& date)
{
    int year = strToNum<int>(date.substr(0, 4));
    int month = strToNum<int>(date.substr(5, 2));
    int day = strToNum<int>(date.substr(8, 2));
    if (day > 0)
        day--;
    date = numToString<int>(year) + "-0" + numToString<int>(month) + "-0" + numToString<int>(day);

}

void BitcoinExchange::getConversion(std::string date, float exchangeRate)
{
   if (m_dailyPrice[date] != 0)
   {
       std::cout << date << " => " << exchangeRate << " = " << m_dailyPrice[date] * exchangeRate << std::endl;
       return;
   }
   while (m_dailyPrice[date] == 0)
       removeOneDay(date);
    std::cout << date << " => " << exchangeRate << " = " << m_dailyPrice[date] * exchangeRate << std::endl;

}


bool errorLine(std::string date, float exchangeRate)
{
    int year = strToNum<int>(date.substr(0, 4));
    int month = strToNum<int>(date.substr(5, 2));
    int day = strToNum<int>(date.substr(8, 2));

    if (year < 0 || month < 0 || day < 0 || year > 2024 || month > 12 || day > 31)
    {
        std::cerr << "Error: date is incorrect => " << date << std::endl;
        return true;
    }

    if (exchangeRate < 0.0 || exchangeRate > 1000.0)
    {
        std::cerr << "Error: exchange rate is wrong" << std::endl;
        return true;
    }
    return false;
}

