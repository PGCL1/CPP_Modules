/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:12:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/27 19:41:28 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Colors.hpp"
#include <iostream>
#include <sstream>
#include <string>

Form::Form() : m_name("this beautiful form"), m_gradeSign(150), m_gradeExec(150)
{
    m_isSigned = false;
    std::cout << GREEN  << this->m_name << " Form's Default Constructor" << RESET << std::endl;
}

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : m_name(name), m_gradeSign(gradeSign), m_gradeExec(gradeExec)
{
    m_isSigned = false;
    if (m_gradeExec < 1 || m_gradeSign < 1)
        throw Form::GradeTooHighException();
    else if (m_gradeExec > 150 || m_gradeExec > 150)
        throw Form::GradeTooLowException();
    std::cout << GREEN  << this->m_name << " Form's Default Constructor" << RESET << std::endl;
}

Form::Form(const Form& copy) :  m_gradeSign(copy.m_gradeSign), m_gradeExec(copy.m_gradeExec) {}


Form& Form::operator=(const Form& copy)
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

Form::~Form()
{
    std::cout << RED << this->getName() << " Form's Destructor!" << RESET << std::endl;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("The grade was too low!");
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("The grade was too high!");
}

std::ostream& operator <<(std::ostream& output, const Form& f)
{
    std::ostringstream convertSign;
    convertSign << f.getGradeSign();
    std::ostringstream convertExec;
    convertExec << f.getGradeExec();
    output << f.getName() + " requires " + convertSign.str() + " to be signed and this grade to be executed " + convertExec.str();
    return output;
}

std::string Form::getName() const
{
    return (this->m_name);
}

int Form::getGradeSign() const
{
    return (this->m_gradeSign);
}

int Form::getGradeExec() const
{
    return (this->m_gradeExec);
}

bool Form::getSigned() const
{
    return (this->m_isSigned);
}

void Form::beSigned(Bureaucrat& b)
{
   if (this->m_gradeSign <= this->m_gradeExec)
   {
       this->m_isSigned = true;
       b.signForm(*this);
   }
   else
       throw Form::GradeTooLowException();
}
