/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:35:36 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/01 18:08:55 by glacroix         ###   ########.fr       */
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
    {
        Bureaucrat a("NotoriousB.I.G", 50);
        RobotomyRequestForm bible("robots");
        bible.beSigned(a);
        a.signForm(bible);
        a.executeForm(bible); // this won't execute
        std::cout << MAGENTA << "Test Bible passed\n" << RESET << std::endl;

/*        Bureaucrat b("BigBoss", 134);
        ShrubberyCreationForm form("best");
        b.signForm(form);
        b.executeForm(form);
        std::cout << MAGENTA << "Test Form passed\n" << RESET << std::endl;


        Bureaucrat c("Igor", 1);
        PresidentialPardonForm hurdle("robots");
        c.signForm(hurdle);
        c.executeForm(hurdle); // this won't execute
        std::cout << MAGENTA << "Test Hurdle passed\n" << RESET << std::endl;
*/
    } 
    catch (std::exception& err)
    {
        std::cout << err.what() << std::endl;
    }
    return 0;
}
