/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:38:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/17 17:16:30 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
{
    std::string &newName = const_cast <std::string&>(this->name);
    newName = "";
    this->grade = 1;
    std::cout << "Bureaucrat's Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    std::string &newName = const_cast <std::string&>(this->name);
    newName = copy.name;
    this->grade = copy.grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        std::string &newName = const_cast <std::string&>(this->name);
        newName = copy.name;
        this->grade = copy.grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat's Destructor!" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade(int &grade)
{
    this->grade++;
}

void Bureaucrat::decrementGrade(int& grade)
{
    this->grade--;
}
