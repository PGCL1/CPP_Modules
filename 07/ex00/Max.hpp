/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:47:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/02 12:48:18 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
#define MAX_HPP

template <typename T>
T const& max(T const& a, T const& b)
{
    if (a == b)
        return (b);
    else
        return (a > b ? a : b);
}

#endif

