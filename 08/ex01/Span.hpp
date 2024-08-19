/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:07:09 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/19 13:13:45 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <list>

class Span {
    private:
        std::list<int> m_element;
        const unsigned int m_maxSize;
        unsigned int m_size;
    public:
        Span();
        Span(unsigned int N);
        Span(Span& example);
        Span& operator=(const Span& example);
        ~Span();

        void addNumber(int num);
        void addAll(std::vector<int> vec);
        int shortestSpan() const;
        int longestSpan() const;
        void printElements();

        class maxSizeReached : public std::exception {
            const char * what() const throw();
        };
        class cannotCopy : public std::exception {
            const char * what() const throw();
        };
        class emptyList : public std::exception {
            const char * what() const throw();
        };

};

#endif
