/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 15:01:37 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/02 15:10:54 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
       T m_element;
    public:
       Array();
       Array(unsigned int n);
       Array(Array const& example);
       Array& operator=(Array const& example);
       ~Array();
};

#endif

