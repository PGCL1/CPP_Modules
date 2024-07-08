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
        Intern thebestIntern;
        AForm *form1;
        form1 = thebestIntern.makeForm("robotomy request form", "GreatForm");
        form1->action();
        delete form1;
        
        AForm *form2;
        form2 = thebestIntern.makeForm("shrubbery creation form", "GreaterForm");
        form2->action();
        delete form2;

        AForm *form3;
        form3 = thebestIntern.makeForm("presidential pardon form", "GreatestForm");
        form3->action();
        delete form3;

        AForm *form4;
        form4 = thebestIntern.makeForm("bullshit form", "badbadForm");
        if (form4)
        {
            form4->action();
            delete form4;
        }
    } 
    catch (std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}
