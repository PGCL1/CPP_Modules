/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:26:33 by glacroix          #+#    #+#             */
/*   Updated: 2024/08/14 17:36:22 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
    Span a(5);
    a.addNumber(4);
    a.addNumber(15);
    a.addNumber(6);
    a.addNumber(71);
    a.addNumber(-8);
    
    a.printElements();
    return 0;
}
