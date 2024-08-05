/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 14:27:13 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/05 12:29:54 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <stdlib.h>

template <typename T>
void iter(T* ptr, size_t len, void(*FuncPtr)(T*))
{
    for (size_t i = 0; i < len; i += 1)
        FuncPtr(ptr + i);
    return;
}

#endif
