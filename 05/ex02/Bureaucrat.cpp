/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:38:06 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:05:02 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Colors.hpp"
#include <iostream>
#include <sstream>
#include <string>

Bureaucrat::Bureaucrat() : m_name("Thank you Ahmed!")
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

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    std::string &newName = const_cast <std::string&>(this->m_name);
    newName = copy.m_name;
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

void Bureaucrat::executeForm(AForm const& form) const
{
    if (form.getSigned())
        form.execute(*this);
    else
        std::cerr << form.getName() << " is not signed!" << std::endl;
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
    output << (_b.getName() + ", bureaucrat m_grade " + convert.str()); 
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

void Bureaucrat::signForm(AForm& form) const
{
    if (!form.getSigned())
    {
        std::cerr <<  this->getName() << " couldn't sign " << form.getName() << " because the office closes at 3PM "<< std::endl;
        return;
    }
    else
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
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
