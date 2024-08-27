/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:49:45 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 11:49:11 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>

//i have to do this because it's the only way to access c (cause it's protected)
class RPN : public std::stack<int>
{
    private:
        std::string m_arithmeticExpression;
    public:
        typedef std::deque<int>::reverse_iterator iterator;
        iterator begin(void) { return this->c.rbegin(); }
        iterator end(void) { return this->c.rend(); }

        RPN();
        void pushUntilSign(std::string input);
        void calculateExpression();
        ~RPN();

        class badExpression : public std::exception {
            const char * what() const throw();
        };
};

#endif

