/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:22:21 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/27 16:27:13 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGE_ME_HPP
#define PMERGE_ME_HPP

#include <vector>

class PmergeMe 
{
    private:
        std::vector<int> m_v;
    public:
        PmergeMe();
        PmergeMe(PmergeMe const& example);
        PmergeMe& operator=(PmergeMe const& example);
        ~PmergeMe();

};

#endif
