/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:30:24 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/27 16:46:47 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Colors.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(), m_requiredGradeSign(25), m_requiredGradeExec(5) 
{
    std::cout << GREEN << " RobotomyRequestForm's Default Constructor" << target << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : m_requiredGradeSign(25), m_requiredGradeExec(5)
{
    this->setGradeSign(copy.getGradeSign());
    this->setGradeExec(copy.getGradeExec());
    this->setName(copy.getName());
}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this != &copy)
    {
        this->setGradeSign(copy.getGradeSign());
        this->setGradeExec(copy.getGradeExec());
        this->setName(copy.getName());
    }
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << this->getName() << " RobotomyRequestForm's Destructor!" << RESET << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() == true && this->getGradeExec() < this->getRequiredGradeExec())
        executor.executeForm(*this);
    else if (this->getGradeExec() > this->getRequiredGradeExec())
        throw RobotomyRequestForm::GradeTooLowException();
}
