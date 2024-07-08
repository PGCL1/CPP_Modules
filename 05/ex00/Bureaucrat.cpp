/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:38:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/08 10:55:28 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include <iostream>
#include <sstream>
#include <string>

Bureaucrat::Bureaucrat() : m_name("Ich bin ein Bureaucrat")
{
    this->m_grade = 1;
    std::cout << GREEN  << this->m_name << " Bureaucrat's Default Constructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name)
{
    this->m_grade = grade;
    if (this->m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << GREEN  << this->m_name << " Bureaucrat's Default Constructor" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : m_name(copy.m_name)
{
    this->m_grade = copy.m_grade;
    if (this->m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
    {
        std::string &newName = const_cast <std::string&>(this->m_name);
        newName = copy.m_name;
        this->m_grade = copy.m_grade;
        if (this->m_grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (this->m_grade > 150)
            throw Bureaucrat::GradeTooLowException();
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << RED << this->getName() << " Bureaucrat's Destructor!" << RESET << std::endl;
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
    std::ostringstream convert;
    convert << _b.getGrade();
    output << (_b.getName() + ", bureaucrat grade " + convert.str()); 
    return output;
}

std::string Bureaucrat::getName() const
{
    return (this->m_name);
}

int Bureaucrat::getGrade() const
{
    return (this->m_grade);
}

void Bureaucrat::incrementGrade()
{
    this->m_grade--;
    if (this->m_grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    this->m_grade++;
    if (this->m_grade > 150)
        throw Bureaucrat::GradeTooLowException();
}
