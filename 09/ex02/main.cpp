/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:48 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/30 16:18:33 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"
#include <sstream>
#include <algorithm>

int strToNum(std::string str)
{
    int result;
    std::istringstream convert(str);
    convert >> result;
    return result;
}

std::vector<std::pair<int, int> > pairUpVec(std::vector<int>& container)
{
    unsigned int len = container.size();
    unsigned int amountOfPairs;
    unsigned int i = 0; unsigned int j = 0;
    amountOfPairs = len / 2;

    std::vector<std::pair<int, int> > test;
    while (i < container.size() && j < amountOfPairs)
    {
        test.push_back(std::make_pair(container[i], container[i+1]));
        i+=2, j++;
    }
    return test;
}


void parseElements(char **argv, int argc, std::vector<int>& inputElements)
{
    for (int i = 1; i < argc; i++)
    {
        int num = strToNum(argv[i]);
        if (num < 0)
        {
            std::cerr << "Error" << std::endl;
            throw PmergeMe::negativeNumber();
        }
        inputElements.push_back(num);
    }
}

std::vector<int> pushLarge(std::vector<std::pair<int, int> > &doubleDim, std::vector<int>& container)
{
    std::vector<int> largeElems;
    for (unsigned int j = 0; j < doubleDim.size(); j++)
    {
            if (doubleDim[j].first < doubleDim[j].second)
                largeElems.push_back(doubleDim[j].second);
            else
                largeElems.push_back(doubleDim[j].first);
    }
    if (container.size() % 2 != 0)
        largeElems.push_back(container[container.size() - 1]);
    return largeElems;
    
}

std::vector<int> pushSmall(std::vector<std::pair<int, int> > &doubleDim)
{
    std::vector<int> smallElems;
    for (unsigned int j = 0; j < doubleDim.size(); j++)
    {
            if (doubleDim[j].first < doubleDim[j].second)
                smallElems.push_back(doubleDim[j].first);
            else
                smallElems.push_back(doubleDim[j].second);
    }
    return smallElems;
    
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    std::vector<int> inputElements;
    parseElements(argv, argc, inputElements);
    PmergeMe obj(inputElements);

    //Vector Sequence
    
    //dividing input into pair of numbers
    std::vector<std::pair<int, int> > doubleDim_Vec = pairUpVec(obj.getVector()); 
    
    //separating pairs into a vector of larger numbers and another one of small numbers
    std::vector<int> largeElementVec = pushLarge(doubleDim_Vec, obj.getVector()); 
    std::vector<int> smallElementVect = pushSmall(doubleDim_Vec);
    std::sort(largeElementVec.begin(), largeElementVec.end());

    for (unsigned int i = 0; i < smallElementVect.size(); i++)
    {
        //function from algorithm to find lower-bound index
        std::vector<int>::iterator pos = std::lower_bound(largeElementVec.begin(), largeElementVec.end(), smallElementVect[i]);
        obj.insertElement(pos, smallElementVect[i], largeElementVec);
    }
    std::swap(obj.getVector(), largeElementVec);
    
    //print sorted array
    std::vector<int>::iterator it = obj.getVector().begin();
    std::vector<int>::iterator end = obj.getVector().end();
    while (it != end)
    {
        std::cout << *it << std::endl;
        it++;
    }
    
    //Deque Sequence
    /*std::deque<std::deque<int>> doubleDim_Deq = pairUpDeq(obj.getDeque()); 
    std::deque<int> largeElementDeq = pushLarge(doubleDim_Deq); 

*/
    return 0;
}
