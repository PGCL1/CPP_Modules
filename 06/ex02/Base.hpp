/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:42:43 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/24 18:42:43 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_ONES_HPP
#define REAL_ONES_HPP

class Base
{
    public:
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
