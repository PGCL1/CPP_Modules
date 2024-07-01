/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:43:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/28 19:14:08 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Colors.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : m_target("defaultForm"), m_requiredGradeSign(145), m_requiredGradeExec(137)
{
    std::cout << GREEN << " ShrubberyCreationForm's Default Constructor" << RESET << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : m_target(target), m_requiredGradeSign(145), m_requiredGradeExec(137)
{
    std::cout << GREEN << " ShrubberyCreationForm's Constructor with params" << RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), m_requiredGradeSign(145), m_requiredGradeExec(137) {}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
    if (this != &copy)
        AForm::operator=(copy);
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

std::string ShrubberyCreationForm::getTarget() const
{
    return this->m_target;
}

void ShrubberyCreationForm::action() const
{
    std::ofstream file;
    std::string path = this->getTarget() + "_shrubbery";
    file.open(path.c_str(), std::ofstream::out | std::ofstream::app);
    if (file.is_open())  
    {
        file << "\noxoxoo    ooxoo\nooxoxo oo  oxoxooo\noooo xxoxoo ooo ooox\noxo o oxoxo  xoxxoxo\noxo xooxoooo o ooo\nooooo\\  /o/o\n\\  \\/ /\n|   /\n|  |\n| D|\n|  |\n|  |\n______/____\\____\n\n";
        file.close();
    }
    else
        std::cerr << RED << "Error opening the file or with the path passed as parameter" << RESET << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() == true)
    {
        if (executor.getGrade() < this->getRequiredGradeExec() && executor.getGrade() < this->getRequiredGradeSign())
        {
            this->action();
            executor.executeForm(*this);
        }
        else if (!(executor.getGrade() < this->getRequiredGradeExec() && executor.getGrade() < this->getRequiredGradeSign()))
            throw ShrubberyCreationForm::GradeTooLowException();
    }
    else
        std::cerr << this->getName() << " grade is too low for " << executor.getName() << " to sign " << std::endl; 
}
