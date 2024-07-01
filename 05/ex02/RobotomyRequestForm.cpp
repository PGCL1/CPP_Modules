/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:30:24 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/28 19:10:34 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Colors.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(), m_requiredGradeSign(25), m_requiredGradeExec(5) 
{
    std::cout << GREEN << " RobotomyRequestForm's Default Constructor" << target << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy), m_requiredGradeSign(25), m_requiredGradeExec(5) {}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
    if (this != &copy)
        AForm::operator=(copy);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << RED << this->getName() << " RobotomyRequestForm's Destructor!" << RESET << std::endl;
}

void RobotomyRequestForm::action() const
{
    std::cout << this->getTarget() << " has been robotomized 50% of the time!" << std::endl;
}

int RobotomyRequestForm::getRequiredGradeExec() const
{
    return this->m_requiredGradeExec;
}

int RobotomyRequestForm::getRequiredGradeSign() const
{
    return this->m_requiredGradeSign;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->m_target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() == true)
    {
        if (executor.getGrade() < this->getRequiredGradeExec() && executor.getGrade() < this->getRequiredGradeSign())
        {
            this->action();
            executor.executeForm(*this);
        }
        else if (!(executor.getGrade() < this->getRequiredGradeExec() && executor.getGrade() < this->getRequiredGradeSign()))
            throw RobotomyRequestForm::GradeTooLowException();
    }
    else
        std::cerr << this->getName() << " grade is too low for " << executor.getName() << " to sign " << std::endl; 
}
