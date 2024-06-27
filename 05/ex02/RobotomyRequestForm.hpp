/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:27:46 by glacroix          #+#    #+#             */
/*   Updated: 2024/06/27 19:03:11 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm : public AForm
{
    private:
        const int m_requiredGradeSign;
        const int m_requiredGradeExec;

    public:
        void execute(Bureaucrat const& executor) const;
        int getRequiredGradeSign() const;
        int getRequiredGradeExec() const;

        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& copy);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
        ~RobotomyRequestForm();

};

#endif
