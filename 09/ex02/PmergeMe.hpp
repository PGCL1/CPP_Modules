/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:22:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/29 16:17:21 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>
#include <deque>
#include <cmath>
#include <exception>

class PmergeMe 
{
    private:
        std::vector<int> m_vec;
        std::deque<int> m_deq;
    public:
        std::vector<int>& getVector();
        std::deque<int>& getDeque();
        void printElements();

        template <typename T>
        int whatsMyPosition(int target, int start, int end, T& container)
        {
            if (start > end)
                return -1;
            const int middle = std::floor((start + end) / 2);
            if (container[middle] > target)
                return whatsMyPosition(target, start, middle - 1, container);
            if (container[middle] < target)
                return whatsMyPosition(target, middle + 1, end, container);
            return (middle);
        }
        template <typename T>
        void insertElement(int pos, int element, T& container)
        {
            typename T::iterator it = container.begin();
            container.insert(it + pos, element);
        }
        
        class negativeNumber : public std::exception {
        const char* what() const throw();
        };

        PmergeMe(std::vector<int>inputElements);
        PmergeMe(PmergeMe const& example);
//        PmergeMe& operator=(PmergeMe const& example);
        ~PmergeMe();

};

#endif
