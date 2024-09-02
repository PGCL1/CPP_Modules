/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:22:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/09/02 12:50:11 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>
#include <deque>
#include <cmath>
#include <exception>

//the subject here explicitely refrained us from using templates
class PmergeMe 
{
    private:
        std::vector<int> m_vec;
        std::deque<int> m_deq;
    public:
        std::vector<int>& getVector();
        std::deque<int>& getDeque();
        void printSortedVec();
        void sortElementsVec();
        void insertElementVec(std::vector<int>::iterator pos, int element, std::vector<int>& container);
        
        void printSortedDeq();
        void sortElementsDeq();
        void insertElementDeq(std::deque<int>::iterator pos, int element, std::deque<int>& container);
        
        class negativeNumber : public std::exception {
        const char* what() const throw();
        };

        PmergeMe(std::vector<int>inputElements);
        PmergeMe(PmergeMe const& example);
        PmergeMe& operator=(PmergeMe& example);
        ~PmergeMe();

};

#endif
