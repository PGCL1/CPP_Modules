/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:07:09 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/14 15:13:43 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

class Span {
    private:
        int *element;
    public:
        void addNumber();
        void addAll();
        int shortestSpan();
        int longestSpan();

        Span(unsigned int N);
        //copy and = overload
        ~Span();
};

#endif
