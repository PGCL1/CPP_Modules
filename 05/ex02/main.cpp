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
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include <iostream>
#include <exception>

int main()
{
    try 
    {/*
        Bureaucrat a("NotoriousB.I.G", 50);
        RobotomyRequestForm bible("robots");
        bible.beSigned(a);
        a.signForm(bible);
        a.executeForm(bible); // this won't execute
        std::cout << MAGENTA << "Test Bible passed\n" << RESET << std::endl;*/

        std::cout << MAGENTA << "Example 2: form is not signed" << RESET << std::endl;
        Bureaucrat b("BigBoss", 134);
        ShrubberyCreationForm form("best");
        form.beSigned(b);
        b.signForm(form);
        b.executeForm(form);
        std::cout << std::endl;


        std::cout << MAGENTA << "Example 3: everything should work here" << RESET << std::endl;
        Bureaucrat c("Igor", 1);
        PresidentialPardonForm hurdle("robots");
        hurdle.beSigned(c);
        c.signForm(hurdle);
        c.executeForm(hurdle); 
        std::cout << std::endl;
    } 
    catch (std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}
