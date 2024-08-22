/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:20:37 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/22 13:41:13 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <list>
#include <fstream>

    //find the value of the line in database which equals date if not look for older date --date
    //
    //multiply value found * exchange rate
int main(int argc, char **argv)
{
#if 1
    (void)argv;
    if (argc != 2)
    {
        std::cerr << "Error: program takes a file as argument" << std::endl;
        return 1;
    }
    std::ifstream file("./data.csv");
    if (!(file.is_open() && file.good()))
    {
        std::cerr << "Error: couldn't open file" << std::endl;
        return 1;
    }
    return 0;

    std::string line;
    std::list<BitcoinExchange> allTime;
    while (std::getline(file, line))
    {
        //read line from input file
        //take the exchange rate from that line -> check 0 >= exchange rate <= 1000 (float or int)
        BitcoinExchange dailyInfo(line);
        allTime.push_back(dailyInfo);
    }
    allTime.sort();
    std::list<BitcoinExchange>::iterator it = allTime.begin();
    std::list<BitcoinExchange>::iterator end = allTime.end();
    while (it != end)
        it->print();


#else
    (void)argc, (void)argv;
    double num = 4.13523412;
    std::cout << num << std::showpoint << std::endl;

#endif
}
