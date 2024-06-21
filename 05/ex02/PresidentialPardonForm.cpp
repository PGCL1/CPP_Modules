/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:33:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/21 20:35:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm() 
{
    this->setGradeExec(5);
    this->setGradeSign(25);
    std::cout << GREEN << " PresidentialPardonForm's Default Constructor" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) 
{
    this->setGradeSign(copy.getGradeSign());
    this->setGradeExec(copy.getGradeExec());
    this->setName(copy.getName());
}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
    if (this != &copy)
    {
        this->setGradeSign(copy.getGradeSign());
        this->setGradeExec(copy.getGradeExec());
        this->setName(copy.getName());
    }
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << this->getName() << " PresidentialPardonForm's Destructor!" << RESET << std::endl;
}
