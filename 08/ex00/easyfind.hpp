/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:35:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/14 15:03:16 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class elementNotFound : public std::exception {
    const char *what(void) const throw()
    {
        return ("Element not found!");
    };
};

template <typename T>
int easyfind(T container, int quaesitum)
{
    std::vector<int> vec(container);
    std::vector<int>::iterator it;

    it = std::find(vec.begin(), vec.end(), quaesitum);
    if (it != vec.end())
    {
        std::cout << "Element found in vec: " << *it << std::endl;
        return (*it);
    }
    else
        throw elementNotFound();
}

#endif

