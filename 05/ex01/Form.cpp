/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:12:41 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/19 16:43:09 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Colors.hpp"
#include <iostream>
#include <string>


Form::Form() : name(_name), gradeSign(150), gradeExec(150)
{

    std::cout << GREEN  << this->name << " Form's Default Constructor" << RESET << std::endl;
}

Form::Form(const Form& copy)
{
}


Form& Form::operator=(const Form& copy)
{
    if (this != &copy)
    {
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

std::ostream& operator <<(std::ostream& output, const Form& _b)
{
}

std::string Form::getName() const
{
    return (this->name);
}

int Form::getGrade(int _grade) const
{
    return (_grade);
}

void Form::incrementGrade()
{
}

void Form::decrementGrade()
{
}
