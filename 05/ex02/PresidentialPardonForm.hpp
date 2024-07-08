/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glacroix <PGCL>                            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:31:58 by glacroix          #+#    #+#             */
/*   Updated: 2024/07/08 15:57:50 by glacroix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm
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

        PresidentialPardonForm();
        PresidentialPardonForm(std::string target_example);
        PresidentialPardonForm(const PresidentialPardonForm& example);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& example);
        ~PresidentialPardonForm();
};

#endif
