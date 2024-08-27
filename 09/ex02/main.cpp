/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:48 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 16:51:26 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

int strToNum(std::string str)
{
    int result;
    std::istringstream convert(str);
    convert >> result;
    return result;
}

template <typename T>
int whatsMyPosition(int target, int start, int end, T& container)
{
   if (start > end)
       return -1;
   const int middle = std::floor((start + end) / 2);
    if (container[middle] == target)
        return (middle);
    if (container[middle] > target)
        return whatsMyPosition(target, start, middle - 1, container);
    if (container[middle] < target)
        return whatsMyPosition(target, middle + 1, end, container);
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return 1;
    std::vector<int> inputElements;
    for (int i = 1; i < argc; i++)
    {
        int num = strToNum(argv[i]);
        if (num < 0)
        {
            std::cerr << "Error" << std::endl;
            return 1;
        }
        inputElements.push_back(num);
    }
    return 0;
}
