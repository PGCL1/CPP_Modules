/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:38:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/18 16:14:03 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include <iostream>

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
    this->grade = _grade;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << GREEN << "Bureaucrat's Default Constructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    std::string &newName = const_cast <std::string&>(this->name);
    newName = copy.name;
    this->grade = copy.grade;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        std::string &newName = const_cast <std::string&>(this->name);
        newName = copy.name;
        this->grade = copy.grade;
        if (this->grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (this->grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED << "Bureaucrat's Destructor!" << RESET << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The grade was too low!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The grade was too high!");
}

std::ostream& operator <<(std::ostream& output, const Bureaucrat& _b)
{
    output << _b.getName() + ", bureaucrat grade " + _b.getGrade(); 
    return output;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void Bureaucrat::incrementGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
