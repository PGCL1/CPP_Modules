/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:43:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/25 19:43:21 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Colors.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(), m_requiredGradeSign(145), m_requiredGradeExec(137)
{
    std::cout << "GradeSign is = " << this->getGradeSign() << std::endl;
    std::cout << "GradeExec is = " << this->getGradeExec() << std::endl;
    this->createFile(target);
    std::cout << GREEN << " ShrubberyCreationForm's Default Constructor" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : m_requiredGradeSign(145), m_requiredGradeExec(137)
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

int ShrubberyCreationForm::getRequiredGradeExec() const
{
    return this->m_requiredGradeExec;
}

int ShrubberyCreationForm::getRequiredGradeSign() const
{
    return this->m_requiredGradeSign;
}

void ShrubberyCreationForm::createFile(std::string& target) const
{
    std::ofstream file;
    std::string path = target + "_shrubbery";
    file.open(path.c_str(), std::ofstream::out | std::ofstream::app);
    if (file.is_open())  
    {
        file << "\noxoxoo    ooxoo\nooxoxo oo  oxoxooo\noooo xxoxoo ooo ooox\noxo o oxoxo  xoxxoxo\noxo xooxoooo o ooo\nooooo\\  /o/o\n\\  \\/ /\n|   /\n|  |\n| D|\n|  |\n|  |\n______/____\\____\n\n";
        file.close();
    }
    else
        std::cout << RED << "Error opening the file or with the path passed as parameter" << RESET << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const 
{
    if (this->getGradeExec() < 
}
