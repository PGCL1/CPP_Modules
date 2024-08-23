/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:54:35 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/23 09:46:34 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <sstream>
#include <map>
#include <fstream>
#include <iomanip>
#include <iostream>

class BitcoinExchange 
{
    private:
        std::map<std::string, float> m_dailyPrice;
        //float m_exchangeRate;
        //const std::ifstream m_db;
        //const std::ifstream& m_inputFile;
    public:
        BitcoinExchange(std::ifstream& database);
        void getConversion(std::string line, float exchangeRate);
};

bool errorLine(std::string date, float exchangeRate);
void generateNewDate(int year, int month, int day, std::string& date);

template <typename T>
std::string numToString(T Number)
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

template <typename T>
T strToNum(std::string str)
{
    T result;
    std::istringstream convert(str);
    convert >> result;
    return result;
}

#endif
