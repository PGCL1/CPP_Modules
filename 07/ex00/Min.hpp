/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 12:41:08 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/02 12:46:16 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
#define MIN_HPP

template <typename T>
T const & min(T const& a, T const& b)
{
    if (a == b)
        return (b);
    else 
        return (a < b ? a : b);
}

#endif

