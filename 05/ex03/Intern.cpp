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

Intern::Intern(const Intern& copy) {}


Intern& Intern::operator=(const Intern& copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

Intern::~Intern()
{
    std::cout << RED << " Intern's Destructor!" << RESET << std::endl;
}

AForm& Intern::makeForm(const std::string formType, const std::string target)
{
    const AForm types[] = {ShrubberyCreationForm, PresidentialPardonForm, RobotomyRequestForm};
    AForm *InternForm;
    for (int i = 0; i < 3; i++)
    {
        if (formType == types[i])
            InternForm = new ShrubberyCreationForm;
    }
    return *InternForm;
}
