/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:30:24 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:11:17 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Colors.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default Robotomy"), m_requiredGradeSign(72), m_requiredGradeExec(45), m_target("Default Robotomy") 
{
    std::cout << GREEN << " RobotomyRequestForm's Default Constructor " << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_example) : AForm(target_example), m_requiredGradeSign(72), m_requiredGradeExec(45), m_target(target_example) 
{
    std::cout << GREEN << " RobotomyRequestForm's Default Constructor " << target_example << RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& example) : AForm(example), m_requiredGradeSign(72), m_requiredGradeExec(45), m_target(example.m_target) {}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& example)
{
    if (this != &example)
        AForm::operator=(example);
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
            std::cout << executor.getName() << " executed " << this->getName() << std::endl;
        }
        else if (!(executor.getGrade() < this->getRequiredGradeExec() || executor.getGrade() < this->getRequiredGradeSign()))
        {
            std::cout << executor.getName() << " couldn't execute " << this->getName() << std::endl;
            throw RobotomyRequestForm::GradeTooLowException();
        }
    }
    else
        std::cerr << this->getName() << "is not signed, so it cannot be executed!" << std::endl;
}
