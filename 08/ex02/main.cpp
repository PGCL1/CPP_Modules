/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:21:00 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/20 15:27:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack& example) : std::stack<T>(example) {}
        MutantStack operator=(MutantStack& example) {
            std::stack<T>::operator=(example);
            return *this;
        }
        ~MutantStack() {}
};

int main()
{

#if 0
    MutantStack<int> ms;
    ms.push(42);
    ms.push(1337);
    
    MutantStack<int>::iterator it = ms.begin();
    ++it;
    --it;
    while (it != ms.end())
    {
        std::cout << *it << std::endl;
        it++;
    }
#else
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top is: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "msstack Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
#endif
    return 0;
}
