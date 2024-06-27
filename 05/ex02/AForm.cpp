/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:12:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/27 19:11:32 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include <iostream>
#include <sstream>
#include <string>

AForm::AForm() : m_name("this beautiful form"), m_gradeSign(150), m_gradeExec(150)
{
    m_isSigned = false;
    std::cout << GREEN  << this->m_name << " calls AForm's Default Constructor" << RESET << std::endl;
}


AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : m_name(name), m_gradeSign(gradeSign), m_gradeExec(gradeExec)
{
    m_isSigned = false;
    std::cout << GREEN  << this->m_name << " calls AForm's Default Constructor" << RESET << std::endl;
}

AForm::AForm(const AForm& copy) :  m_gradeSign(100), m_gradeExec(100) 
{
        int& newGradeSign = const_cast <int&> (this->m_gradeSign);
        int& newGradeExec = const_cast <int&> (this->m_gradeExec);
        newGradeSign = copy.m_gradeSign;
        newGradeExec = copy.m_gradeExec;
}


AForm& AForm::operator=(const AForm& copy)
{
    if (this != &copy)
    {
        int& newGradeSign = const_cast <int&> (this->m_gradeSign);
        int& newGradeExec = const_cast <int&> (this->m_gradeExec);
        newGradeSign = copy.m_gradeSign;
        newGradeExec = copy.m_gradeExec;
    }
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
   if (this->m_gradeSign <= this->m_gradeExec)
   {
       this->m_isSigned = true;
       b.signForm(*this);
   }
   else
       throw AForm::GradeTooLowException();
}
