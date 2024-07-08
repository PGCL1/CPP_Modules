/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:12:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:04:01 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include <iostream>
#include <sstream>
#include <string>

AForm::AForm() : m_name("this beautiful form"), m_gradeSign(150), m_gradeExec(150), m_isSigned(false)
{
    std::cout << GREEN  << this->m_name << " calls AForm's Default Constructor" << RESET << std::endl;
}

AForm::AForm(std::string name_example) : m_name(name_example), m_gradeSign(150), m_gradeExec(150), m_isSigned(false)
{
    std::cout << GREEN  << this->m_name << " calls AForm's Default Constructor" << RESET << std::endl;
}


AForm::AForm(const std::string name_example, const int gradeSign_example, const int gradeExec_example) : m_name(name_example), m_gradeSign(gradeSign_example), m_gradeExec(gradeExec_example), m_isSigned(false)
{
    std::cout << GREEN  << this->m_name << " calls AForm's Default Constructor" << RESET << std::endl;
}

AForm::AForm(const AForm& example) :  m_gradeSign(100), m_gradeExec(100) 
{
    this->m_isSigned = example.m_isSigned;
}


AForm& AForm::operator=(const AForm& example)
{
    if (this != &example)
        this->m_isSigned = example.m_isSigned;
    return (*this);
}

AForm::~AForm()
{
    std::cout << RED << this->getName() << " AForm's Destructor!" << RESET << std::endl;
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("The grade was too low!");
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("The grade was too high!");
}

std::ostream& operator <<(std::ostream& output, const AForm& f)
{
    std::ostringstream convertSign;
    convertSign << f.getGradeSign();
    std::ostringstream convertExec;
    convertExec << f.getGradeExec();
    output << f.getName() + " requires " + convertSign.str() + " to be signed and this grade to be executed " + convertExec.str();
    return output;
}

std::string AForm::getName() const
{
    return (this->m_name);
}

int AForm::getGradeSign() const
{
    return (this->m_gradeSign);
}

int AForm::getGradeExec() const
{
    return (this->m_gradeExec);
}

bool AForm::getSigned() const
{
    return (this->m_isSigned);
}

void AForm::beSigned(Bureaucrat& b)
{
    if (this->getSigned())
    {
        std::cerr << this->getName() << " is already signed, " << b.getName() << " couldn't sign it" << std::endl;
        return;
    }
    else if (b.getGrade() <= this->m_gradeExec && b.getGrade() <= this->m_gradeSign)
        this->m_isSigned = true;
    else
        throw AForm::GradeTooLowException();
}
