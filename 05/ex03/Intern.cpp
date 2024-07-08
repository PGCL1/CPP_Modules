/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:55:50 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:55:50 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Colors.hpp"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() 
{
    std::cout << GREEN  << " Intern's Default Constructor" << RESET << std::endl;
}

Intern::Intern(const Intern& example) {}


Intern& Intern::operator=(const Intern& example) {return *this;}

Intern::~Intern()
{
    std::cout << RED << " Intern's Destructor!" << RESET << std::endl;
}

AForm* Intern::makeForm(const std::string formType, const std::string target)
{
    const std::string types[3] = {"shrubbery creation form", "presidential pardon form", "robotomy request form"};
    AForm *InternForm = NULL;
    int i = 0;
    for (; i < 3; i++)
    {
        if (formType == types[i])
            break;
    }
    switch (i)
    {
        case 0:
            InternForm = new ShrubberyCreationForm(target);
            return (InternForm);
        case 1:
            InternForm = new PresidentialPardonForm(target);
            return (InternForm);
        case 2:
            InternForm = new RobotomyRequestForm(target);
            return (InternForm);
        default:
            std::cerr << "The form type param doesn't not exist in the predefined types of forms!" << std::endl;
            break;
    }
    return NULL;
}
