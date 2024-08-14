/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:07:09 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/14 17:35:41 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <list>

class Span {
    private:
        std::list<int> m_element;
        unsigned int m_maxSize;
    public:
        void addNumber(int num);
        void printElements();
        //void addAll(std::vector<int> argList);
        //int shortestSpan();
        //int longestSpan();

        Span();
        Span(unsigned int N);
        //copy and = overload
        ~Span();
};

#endif
