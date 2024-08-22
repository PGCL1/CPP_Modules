/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:54:35 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/22 13:31:28 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
#define BITCOIN_EXCHANGE_HPP

#include <sstream>
#include <iomanip>
#include <iostream>

class BitcoinExchange 
{
    private:
        int m_year;
        int m_month;
        int m_day;
        double m_value;
    public:
        BitcoinExchange(std::string line);
        void print();
};

template <typename T>
T strToNum(std::string str)
{
    T result;
    std::istringstream convert(str);
    convert >> result;
    return result;
}

#endif
