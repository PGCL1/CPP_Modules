/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <glacroix@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:33:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/02 19:12:24 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Colors.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("Default Target"), m_requiredGradeSign(25), m_requiredGradeExec(5), m_target("Default Target")
{
    std::cout << GREEN << " PresidentialPardonForm's Default Constructor " << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_example) : AForm(target_example), m_requiredGradeSign(25), m_requiredGradeExec(5), m_target(target_example)
{
    std::cout << GREEN << " PresidentialPardonForm's Default Constructor " << target_example << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& example) : AForm(example), m_requiredGradeSign(25), m_requiredGradeExec(5) {}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& example)
{
    if (this != &example)
        AForm::operator=(example);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << RED << this->getName() << " PresidentialPardonForm's Destructor!" << RESET << std::endl;
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
    if (this->getSigned() == true)
    {
        if (executor.getGrade() < this->getRequiredGradeExec() && executor.getGrade() < this->getRequiredGradeSign())
            this->action();
        else if (!(executor.getGrade() < this->getRequiredGradeExec() || executor.getGrade() < this->getRequiredGradeSign()))
        {
            std::cout << executor.getName() << " couldn't execute " << this->getName() << std::endl;
            throw PresidentialPardonForm::GradeTooLowException();
        }
    }
    else
        std::cerr << this->getName() << " grade is too low for " << executor.getName() << " to sign " << std::endl; 
}

int PresidentialPardonForm::getRequiredGradeExec() const
{
    return this->m_requiredGradeExec;
}

int PresidentialPardonForm::getRequiredGradeSign() const
{
    return this->m_requiredGradeSign;
}

std::string PresidentialPardonForm::getTarget() const 
{
    return this->m_target;
}
