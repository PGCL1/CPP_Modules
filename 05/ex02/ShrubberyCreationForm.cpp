/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:43:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/21 20:26:30 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Colors.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm() 
{
    this->setGradeExec(137);
    this->setGradeSign(145);
    std::cout << GREEN << " ShrubberyCreationForm's Default Constructor" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) 
{
    this->setGradeSign(copy.getGradeSign());
    this->setGradeExec(copy.getGradeExec());
    this->setName(copy.getName());
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
    if (this != &copy)
    {
        this->setGradeSign(copy.getGradeSign());
        this->setGradeExec(copy.getGradeExec());
        this->setName(copy.getName());
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << RED << this->getName() << " ShrubberyCreationForm's Destructor!" << RESET << std::endl;
}
