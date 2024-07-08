/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:27:46 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/08 16:00:03 by glacroix         ###   ########.fr       */
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
        const std::string m_target;

    public:
        void execute(Bureaucrat const& executor) const;
        int getRequiredGradeSign() const;
        int getRequiredGradeExec() const;
        std::string getTarget() const;
        void action() const;

        RobotomyRequestForm(std::string target_example);
        RobotomyRequestForm(const RobotomyRequestForm& example);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& example);
        ~RobotomyRequestForm();

};

#endif
