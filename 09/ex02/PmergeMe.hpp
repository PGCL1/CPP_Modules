/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:22:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/30 16:15:38 by glacroix         ###   ########.fr       */
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
        void insertElement(typename T::iterator pos, int element, T& container)
        {
            container.insert(pos, element);
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
