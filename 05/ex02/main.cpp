/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 18:35:36 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/28 19:02:35 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
    Bureaucrat b("BigBoss", 134);

    AForm *form = new ShrubberyCreationForm("best");
    b.signForm(*form);
    b.executeForm(*form);

    std::cout << std::endl;

    Bureaucrat a("NotoriousB.I.G", 50);
    AForm *bible = new RobotomyRequestForm("robots");
    a.signForm(*bible);
    a.executeForm(*bible); // this won't execute
    return 0;
}
