/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:35:36 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:13:39 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
#include "Intern.hpp"

int main()
{
    try 
    {
        Intern someDumbIntern;
        AForm *rrr;
        rrr = someDumbIntern.makeForm("robotomy request form", "test");
        rrr->action();
        delete rrr;
    } 
    catch (std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}
