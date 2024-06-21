/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 19:43:40 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/21 21:23:23 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Colors.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm() 
{
    this->createFile(target);
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

void ShrubberyCreationForm::createFile(std::string& path) const
{
    (void)path;
    std::ofstream file;
    file.open(path, "myBeautifulTree.txt");
    file << "oxoxoo    ooxoo\nooxoxo oo  oxoxooo\noooo xxoxoo ooo ooox\noxo o oxoxo  xoxxoxo\noxo xooxoooo o ooo\nooooo\\  /o/o\n\\  \\/ /\n|   /\n|  |\n| D|\n|  |\n|  |\n______/____\\____";
}
