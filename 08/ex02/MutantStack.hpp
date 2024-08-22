/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 17:10:57 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/22 09:11:54 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::deque<T>::reverse_iterator iterator;
        typedef typename std::deque<T>::iterator reverse_iterator;

        iterator begin(void) 
        {
            return this->c.rbegin();
        }
        iterator end(void) 
        {
            return this->c.rend();
        }

        reverse_iterator rbegin(void)
        {
            return this->c.begin();
        }
        reverse_iterator rend(void)
        {
            return this->c.end();
        }

        MutantStack() : std::stack<T>()
        {
            std::cout << "Default Constructor MutantStack" << std::endl;
        }
        MutantStack(const MutantStack& example) : std::stack<T>(example)
        {
            std::cout << "Copy Constructor MutantStack" << std::endl;
        }
        MutantStack& operator=(MutantStack& example)
        {
            std::cout << "Operator Overload MutantStack" << std::endl;
            if (this != &example)
                std::stack<T>::operator=(example);
            return *this;
        }
        ~MutantStack() 
        {
            std::cout << "Default Destructor MutantStack" << std::endl;
        }
};


#endif

