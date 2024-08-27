/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:37:08 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 17:06:11 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Trying to understand merge-insertion sort algorithm Ford-Johnson
 *
 * ./PmergeMe 3 5 9 7 4
 *
 * size = 5
 * pairs = (3, 5) (9, 7) (4)
 * L  = (3, 7)
 * larg el = 5      9     4
 * container(sorted larg el) =  (4, 5, 9)
 * container = (3, 4, 5, 9)
 * i guess use the function whatsMyPosition to insert whatever's left in pairs not in S
 *  - find the position of L[x] in S and insert it there
 *  - repeat until no elements left in L
 *
 *
*/
