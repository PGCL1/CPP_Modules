/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:41:48 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/29 17:14:07 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PmergeMe.hpp"
#include <sstream>

int strToNum(std::string str)
{
    int result;
    std::istringstream convert(str);
    convert >> result;
    return result;
}

//cannot find a way to output a two dimensional template, hence the duplicated function for now
//problem here in pushing elements in double dimension vector || says the size is 0
std::vector<std::vector<int> > pairUpVec(std::vector<int>& container)
{
    std::vector<std::vector<int> > doubDimVec;
    unsigned int len = container.size();
    unsigned int amountOfPairs;
    if (len % 2 == 0) 
        amountOfPairs = len % 2;
    else
        amountOfPairs = len % 2 + 1;
    for (unsigned int j = 0; j < amountOfPairs; j++)
    {
        for (unsigned int i = 0; i < 2 && container[i]; i++)
            doubDimVec[j].push_back((container[i]));
    }
    return doubDimVec;
}

std::deque<std::deque<int> > pairUpDeq(std::deque<int>& container)
{
    std::deque<std::deque<int> > doubDimDeq;
    unsigned int len = container.size();
    unsigned int amountOfPairs;
    if (len % 2 == 0) 
        amountOfPairs = len % 2;
    else
        amountOfPairs = len % 2 + 1;
    for (unsigned int j = 0; j < amountOfPairs; j++)
    {
        for (unsigned int i = 0; i < 2 && container[i]; i++)
            doubDimDeq[j].push_back((container[i]));
    }
    return doubDimDeq;
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

std::vector<int> pushLarge(std::vector<std::vector<int> > &doubleDim)
{
    std::vector<int> largeElems;
    std::cout << "size = " <<  doubleDim.size() << std::endl;
    for (unsigned int j = 0; j < doubleDim.size(); j++)
    {
        for (unsigned int i = 0; i < 2 && doubleDim[j][i]; i++)
        {
            std::cout << "doubleDim: " << doubleDim[j][i] << std::endl;
            if (doubleDim[j][0] < doubleDim[j][1])
                largeElems.push_back(doubleDim[j][1]);
            else
                largeElems.push_back(doubleDim[j][0]);
        }
    }
    if (doubleDim.size() % 2 != 0)
        largeElems.push_back(doubleDim[(int)doubleDim.size() % 2 + 1][0]);
    return largeElems;
    
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
    std::vector<std::vector<int> > doubleDim_Vec = pairUpVec(obj.getVector()); 
    std::vector<int> largeElementVec = pushLarge(doubleDim_Vec); 

    std::vector<int>::iterator it = largeElementVec.begin();
    std::vector<int>::iterator end = largeElementVec.end();
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
